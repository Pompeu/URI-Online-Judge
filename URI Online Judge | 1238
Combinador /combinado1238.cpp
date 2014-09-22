/*
**	URI Online Judge | 1238
**	
**	Combinador 
**
**	Instituto Federal Goiano Campus Morrinhos
**
**	Itacir Ferreira Pompeu	
**
*/

#include <cstdio>
#include <cstdlib>

//char* combina(char *a, char *b);

int main(){
	int n; 	
 
	scanf("%i ",&n);//esse espaço logo depois do %i limpa o buffer

	char a[51],b[51];

	while(n--){
		scanf("%s",a);
		scanf("%s",b);

		printf("%s\n",combina(a,b));
	}
	return 0;
}
	/*essa função faz duas "Strings" se juntarem*/

char* combina(char *a, char *b){

	int tam = 0;//contador do tanho do primeiro vetor de char

	char *r = (char*)malloc(sizeof(char)+1*103);//aloco o tamanho maximo dos dois vetores de char +1 para o '\0'

	for (int i = 0; *a != '\0'; i++){
			r[i] = *a++;
			tam++;		
	}
	//inicio o i com tanho do primeiro vetor
	for (int i = tam; *b != '\0'; i++){
			r[i] = *b++;		
	}	
	return r;
}