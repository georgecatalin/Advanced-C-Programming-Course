#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <sys/types.h>

short create_socket()
{
    short this_socket=0;
    printf("Creating the file descriptor for the master socket.\n");

    this_socket=socket(AF_INET,SOCK_STREAM,0);

    return this_socket;
}

int connect_to_server(int socket_number)
{
    int returned_value=-1;

    int server_port=2005;

    struct sockaddr_in remote_server={0};
    remote_server.sin_family=AF_INET;
    remote_server.sin_addr.s_addr=inet_addr("127.0.0.1");
    remote_server.sin_port=htons(server_port);

    returned_value=connect(socket_number,(struct sockaddr *) &remote_server, sizeof(remote_server));

    return returned_value;
}

int send_to_server(int socket_number, char *request, short length_request)
{
    int short_returned_value=-1;

    struct timeval tv;
    tv.tv_sec=20; //timeout
    tv.tv_usec=0;

    if(setsockopt(socket_number,SOL_SOCKET,SO_SNDTIMEO,(char *) &tv, sizeof(tv))<0)
    {
        puts("Timed out");
        return -1;
    }

    short_returned_value=send(socket_number,request,length_request,0);
    return short_returned_value;
}


int receive_in_socket(int socket_number, char *response, short receive_size)
{
    int returned_value=-1;
    struct timeval tv;
    tv.tv_sec=20;
    tv.tv_usec=0;

    if(setsockopt(socket_number,SOL_SOCKET,SO_RCVTIMEO, (char *)&tv, sizeof(tv))<0)
    {
        printf("Timed out.\n");
        return -1;
    }


    returned_value=recv(socket_number,response,receive_size,0);
    printf("Response >> %s.\n",response);

    return returned_value;
}


int main(int argc, char **argv)
{
    int thissocket=0, read_size=0;
    struct sockaddr_in remote_server;

    char sendtoServer[100]={0};
    char server_reply[200]={0};

    //Create the socket
    thissocket=create_socket();

    if(thissocket==-1)
    {
        perror("Could not create socket.");
        exit(-1);
    }

    //Connect to the server
    if(connect_to_server(thissocket)<0)
    {
        perror("Error connecting to server.");
        return -1;
    }


    puts("Successfully connected to the server.");
    puts("Enter your message");

    fgets(sendtoServer,100,stdin);

    //send data to server
    send_to_server(thissocket,sendtoServer,sizeof(sendtoServer));


    //receive data from server
    read_size=receive_in_socket(thissocket,server_reply,200);
    printf("The response from server is >>> %s.\n",server_reply);

    close(thissocket);

    return 0;
}
