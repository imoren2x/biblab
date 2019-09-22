/* inet.h */
#define SERV_TCP_PORT 6667

/* Cliente de ECO sobre TCP */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include "inet.h"

main()
{
	int sockfd, n;
	struct sockaddr_in serv_addr;
	char serv_host_addr[30], buffer[1024];

	printf("Dirección IP del servidor (a.b.c.d) => ");
	gets(serv_host_addr);

	//SOCKET//
	if ( (sockfd = socket(AF_INET, SOCK_STREAM, 0) ) < 0 )
	{
		perror("Client: can't open stream socket.");
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(serv_host_addr);
	serv_addr.sin_port = htons(SERV_TCP_PORT);

	//CONNECT//
	if ( connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr) ) != 0 )
	{
		perror("Client: can't connect with server.");
		return -1;
	}
	printf("Welcome to ECHO service ==> \n");
	gets(buffer);

	//SEND//
	if ( (n = send(sockfd, buffer, strlen(buffer), 0)) != strlen(buffer) )
	{
		perror("Client: error in send.");
		return -1;
	}

	printf("Client: envie %d bytes\n", n);
	bzero(buffer, sizeof(buffer));

	//RECV//
	if ( ( n = recv(sockfd, buffer, sizeof(buffer), 0)) < 0 )
	{
		perror("Client: error in recv\n");
		return -1;
	}
	printf("ECHO: %s (%d bytes) \n", buffer, n);
	//close//
	close(sockfd);
}