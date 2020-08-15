#include <stdio.h>

char* Getnchars( const char* ptrpacket, const unsigned int nchars);


int main()
{
     char *packet = (char*)calloc(56, sizeof(char));
     char *subpacket;
     char *address = (char*)calloc(7+1, sizeof(char));
     char *endpoint = (char*)calloc(4+1, sizeof(char));
     char c;
     const int pos = 0;

     printf("Write the USB packet:\n");
     //scanf("%s",packet);
     strcpy(packet, "0000000000000000111111110101011010110100");
     printf("\n");

     printf("Packet: %s", packet);
     printf("\n");

     subpacket = &packet[pos];
     c = packet[pos];
     printf("El valor de %d es %s", pos, packet[pos]);
    system("pause");

     printf("\n%s",subpacket);
     //address = Getnchars("gilipollas", 7);//it works!
     address = Getnchars(subpacket, 7);//it works!

     printf("\n Address: %s", address[0]);
     printf("\n");

     subpacket = &packet[47];
     endpoint = Getnchars(subpacket,4);

     printf("\nEndPoint: %s", endpoint);
     printf("\n");

     system("pause");

     return 0;
}

char* Getnchars( const char* ptrpacket, const unsigned int nchars)
{
  // variables
  int index;
  char* auxptr = (char*) calloc(nchars + 1, sizeof(char));
  char c;

  printf("[Getnchars] Begin\n");
  // body
  for (index = 0; index <= nchars; index++)
  {
      c = ptrpacket[index];
      auxptr[index] = c;
  }
  auxptr[index] = '\0';
  printf("[Getnchars] End\n");
  return auxptr;
}
