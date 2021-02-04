#include <stdio.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <linux/in.h>
#include<stdio.h>
#include<string.h>
void Temp_control(float);
void Temperature_thrusters(float);
void acceleration_rocket(float);
void gyro_rocket(float);


struct
{
 float Temp_control;
 float Temperature_thrusters;
 float acceleration_rocket;
 float gyro_rocket;

}sensor1,sensor2,sensor3,sensor4;

struct sockaddr_in saddr;
struct sockaddr_in caddr;
int len,sfd,cfd;
unsigned char buff[1024];
struct sockaddr_in saddr;


int cfd,len;
unsigned char buff[1024];


int main(int argc char *argv[])

{

 float sensor1 Temp_control;
 float sensor2_Temperature_thrusters;
 float sensor3 acceleration_rocket;
 float sensor4 gyro_rocket;
char buffer[500]
	char buffer[500];
                 write(fd[1],sensor1.Temp_CS,500)
                write(fd[1],sensor2.Temp_Thrustersensor1.Temp_CS,500)
                write(fd[1],sensor3.Accel_Rocketensor1.Temp_CS,500)
                write(fd[1],sensor4.sensor4.Gyro_Rocket,500)
/// client 
		    cfd=socket(AF_INET, SOCK_STREAM,0);
    saddr.sin_family=AF_INET;
    saddr.sin_addr.s_addr= inet_addr("127.0.0.1");
    saddr.sin_port= htons(5678);
    connect(cfd,(struct sockaddr*)&saddr, sizeof(struct sockaddr_in));
    read(cfd,buff,1024);
    printf("server sent: %s\n", buff);
    //server
   sfd= socket(AF_INET,SOCK_STREAM,0);  //socket()
    saddr.sin_family =AF_INET;
    saddr.sin_addr.s_addr= inet_addr("127.0.0.1");
    saddr.sin_port = htons(5678);
    bind(sfd, (struct sockaddr *)&saddr, sizeof(struct sockaddr_in));
    listen(sfd,10);
	int ret, client_fd;
    struct sockaddr_in server_addr;
    int no[1];
    
    client_fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("client socket created: %d\n", client_fd);

    printf("client is connecting to server socket.\n");
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    inet_aton(SERVER_IP, &server_addr.sin_addr);
    ret = connect(client_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));
    printf("client is connected to server socket: %d\n", ret);

    do {
          printf("acceleration_rocket client: ");
        no[0] = rand() % 20;
        write(client_fd, no, sizeof(no));
       	int i = 0;  
		printf("%d\n",no[0]);
		while(i != 10000)
		{
			i++;
		}
		sleep(1);
            }while( 1000 != 0);

   
    close(client_fd);
    printf("client closed socket connection.\n");
   

    do {
        
        printf("gyro_rocket client: ");
        no[0] = rand() % 360;
        write(client_fd, no, sizeof(no));
       	int i = 0;  
		printf("%d\n",no[0]);
		while(i != 10000)
		{
			i++;
		}
		sleep(1);
            }while( 1000 != 0);

}


    len = sizeof(struct sockaddr_in);
    cfd= accept(sfd, (struct sockaddr *)&caddr, &len);
    write(cfd,"hello S\n",18);
    read(cfd,buff,1024);
    printf("client send: %s",buff);

    close(sfd);
    close(cfd);

}

    printf("enetr value is %f %f %f %f",Temperature_CS(),Temperature_Thrusters(),Acceleration_Rocket(),Gyro_Rocket());
}
	
}

}
void Temp_control(float);
{
	int i;
	
	for(i=30;i<300;i++)
		if(30>300)
	{
		printf("%d", rand());
	}
		else
		{
			printf("given data range is not in range");
		}
}


void Temperature_Thrusters(float)
                {
                        int i;
                        if((for(i=-100;i<100;i++)))
                        {
                         printf("%d",rand());
                        }
			else
			printf("given data range is not in range")
		}


void gyro_Rocket(float);
                {
                int i;
                if(for(i=0;i<360;i++))
                {
                        printf("%d",rand());
                }
                 else
                        {
                         printf("given rockate data is not in range");
                        }


                }





}





