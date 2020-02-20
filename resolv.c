#include<stdio.h>
#include<netdb.h>
#include<arpa/inet.h>
#Resolvendo nomes
#Modo de uso: resolv nomedoalvo.com
int main(int argc,char *argv[]){
	char *alvo;
	alvo=argv[1];

	struct hostent *host;

	host=gethostbyname(alvo);

	printf("%s ===> %s\n", alvo, inet_ntoa(*((struct in_addr *)host->h_addr)));
	return 0;

}
