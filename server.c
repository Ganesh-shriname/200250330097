#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 2809

int main() {
    int ret, server_fd, client_fd;
    struct sockaddr_in server_addr, client_addr;
    socklen_t sock_len;
    char no[1];

    //1. create main server socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("server socket created: %d\n", server_fd);

    //2. assign/bind address to the socket
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    inet_aton(SERVER_IP, &server_addr.sin_addr);
    ret = bind(server_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
    printf("server address assigned: %d\n", ret);

    //3. listen to the socket
    listen(server_fd, 5);
    printf("listening to server socket.\n");

    //6. accept the client connection & create new socket
    printf("server is waiting for client connection.\n");
    sock_len = sizeof(client_addr);
    client_fd = accept(server_fd, (struct sockaddr*)&client_addr, &sock_len);
    printf("server accepted client connection: %d\n", client_fd);

    do {
        //8. read from the socket
       int cnt=read(client_fd, no, sizeof(no));
	printf("%d",no[0]); 
	sleep(1);
	       
    }while( no != 0);

    //12. close the socket
    close(client_fd);
    printf("server closed client socket connection.\n");

    //13. shutdown the main socket
    shutdown(server_fd, SHUT_RDWR);
    printf("server closed main socket socket.\n");
    return 0;
}

