#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <stdlib.h>
#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 2809

int main() {
    int ret, client_fd;
    struct sockaddr_in server_addr;
    int no[1];
    //4. create client socket
    client_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("client socket created: %d\n", client_fd);

    //5. connect to the server socket
    printf("client is connecting to server socket.\n");
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    inet_aton(SERVER_IP, &server_addr.sin_addr);
    ret = connect(client_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
    printf("client is connected to server socket: %d\n", ret);

    do {
        //7. write to the socket
        printf("temperature_thrusters client: ");
        no[0] = rand() % 300;
        write(client_fd, no, sizeof(no));
       	int i = 0;  
		printf("%d\n",no[0]);
		while(i != 10000)
		{
			i++;
		}
		sleep(1);
            }while( 1000 != 0);

    //11. close the socket
    close(client_fd);
    printf("client closed socket connection.\n");
    return 0;
}

