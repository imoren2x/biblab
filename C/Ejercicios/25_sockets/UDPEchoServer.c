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
	char host_name[200], buffer[1024];

	//SOCKET//
	if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0) ) < 0 )
	{
		perror("Server: can't open datagram socket.");
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(0);
	serv_addr.sin_port = htons(SERV_UDP_PORT);

	//BIND//
	if ( bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0 )
	{
		perror("Server: can't bind local address");
		return -1;
	}

	//UDP no tiene listen porque no hay orientación a la conexión//
	//listen(sockfd, 5);

	for (;;)
	{
		chilen = sizeof(cli_addr);
		bzero( (char*)&cli_addr, clilen);
		bzero(buffer, sizeof(buffer));

		printf("ESPERA UNA PETICION UDP.\n");
		//RECVFROM//
		if ( (n = recvfrom(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr *)&cli_addr, &clilen)) < 0 )
		{
			perror("secho: error in recvfrom function");
			return -1;
		}

		printf("\n\n %s (%d bytes)\n", buffer, n);

		//SENDTO//
		if ( ( n = sendto(sockfd, buffer, strlen(buffer), 0, (struct sockaddr *)&cli_addr, clilen) ) < 0 )
		{
			printf("secho: Error in function sendto \n");
			return -1;
		}
		//No hay close porque no hay orientacion a la conexion//
		//close(newsockfd);
	}
}