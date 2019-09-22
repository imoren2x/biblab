/* inet.h */
#define SERV_UDP_PORT 6667

/* Servidor de ECO sobre TCP */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include "inet.h"

main()
{
	int sockfd, newsockfd, clilen, n;
	struct sockaddr_in cli_addr, serv_addr;
	char server_host_addr[30], buffer[1024];

	printf("Dirección IP del servidor (a.b.c.d) => ");
	gets(serv_host_addr);

	//SOCKET//
	if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0) ) < 0 )
	{
		perror("Client: can't open datagram socket.");
		return -1;
	}

	bzero( (char *)&cli_addr, sizeof(cli_addr));
	cli_addr.sin_family = AF_INET;
	//BIND//
	if ( bind(sockfd, (struct sockaddr *)&cli_addr, sizeof(cli_addr)) < 0)
	{
		perror("Client: can't bind a port.");
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(serv_host_addr);
	serv_addr.sin_port = htons(SERV_UDP_PORT);

	printf("Welcome to Echo service ==> ");
	gets(buffer);

	clileng = sizeof(serv_addr);
	//sendto//
	if ( ( n = sendto(sockfd, buffer, strlen(buffer), 0, (struct sockaddr *)&serv_addr, clilen)) < 0 )
	{
		perror("cecho: error in function sendto.");
		return -1;
	}
	printf("cecho: envie %d bytes\n", n);

	bzero(buffer, sizeof(buffer));
	clilen = sizeof(serv_addr);

	//RECVFROM//
	if ( (n = recvfrom(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr *)&cli_addr, &clilen)) < 0 )
	{
		perror("secho: error in recvfrom function");
		return -1;
	}

	printf("\n ECHO: %s\n", buffer);

	close(sockfd);
}
}