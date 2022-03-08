#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/socket.h>


short create_the_socket(void)
{
    short this_socket=-1;
    puts("Now I am creating the socket to establish the communication. aka a virtual endpoint needed that communication happen");

    this_socket=socket(AF_INET,SOCK_STREAM,0);

    if(this_socket<0)
    {
        perror("Error during socket creation");
    }

    return this_socket;
}

int bind_the_socket(int this_socket)
{
    int returned_value=-1;

    int port_number=2005;

    struct sockaddr_in my_sockaddr={0}; //initialize all its members to 0

    my_sockaddr.sin_family=AF_INET;
    my_sockaddr.sin_addr.s_addr=htonl(INADDR_ANY); //set to a random address
    my_sockaddr.sin_port=htons(port_number); //use the port set above

    returned_value=bind(this_socket,(struct sockaddr_in *) &my_sockaddr,sizeof(my_sockaddr));

    return returned_value;
}


int main(int argc, char **argv)
{
    int socket_description=0, client_socket=0, clientLength=0;
    struct sockaddr_in client;
    char client_message[200]={0};
    char message[200]={0};

    const char *pMessage="hello from Jason's server";

    //Create a socket
    socket_description=create_the_socket();

    if(socket_description==-1)
    {
        puts("Could not create the socket.");
        return 1;
    }

    puts("Socket was created successfully.");

    //Bind the socket=attach the socket to an address and a port
    if(bind_the_socket(socket_description)<0)
    {
        perror("Could not bind the socket.");
        return 1;
    }

    puts("Bind was done");

    //Listen
    listen(socket_description,3);

    //Accepts incoming connections
    while(1)
    {
        printf("Waiting for incoming connections.\n");
        clientLength=sizeof(struct sockaddr_in);

        //accept connections from incoming connections
        client_socket=accept(socket_description,(struct sockaddr_in *) &client, (socklen_t *) &clientLength);

        if(client_socket<0)
        {
            perror("Could not accept");
            return 1;
        }

        printf("Connection accepted.");

        //initializing the buffers to send and receive messages

        memset(client_message,'\0',sizeof(client_message));
        memset(message,'\0',sizeof(message));

        //receive from the client

        if(recv(client_socket,client_message,200,0)<0)
        {
            perror("Receive failed");
            exit(1);
        }

        printf("Client replies with >> %s .\n",client_message);

        //validation of the received message
        if(strcmp(pMessage,client_message)==0)
        {
            strcpy(message,"Hi,there. You are the chosen one.");
        }
        else
        {
            strcpy(message,"No shit. It is an invalid message.");
        }

        //send the message back to the client
        if(send(client_socket,message,strlen(message),0)<0)
        {
            perror("Error when sending message from server.");
            return 1;
        }


        close(client_socket);
        sleep(1);

    }

    return 0;
}
