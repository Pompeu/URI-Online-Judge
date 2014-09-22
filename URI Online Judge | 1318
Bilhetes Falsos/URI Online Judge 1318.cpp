/*		URI online Judge 1318
**
**		Bilhetes Falsos
**
**		By Itacir Ferreira Pompeu
**
**		Instituto Federal Goiano Campus Morrinhos
*/

#include <cstdio>
#include <cstdlib>

#define LLI long long int 

int main(void){      

    LLI b,p,aux,cont,i,tam;
         
    while(scanf("%lld %lld",&b ,&p), b+p > 0){
        tam = p;

        if( b > p)
        	tam = b;

        LLI vet[tam];

        for(i = 0; i < tam; i++)
                vet[i] = 0;

        for(i = 0; i < p; i++){
                scanf("%lld",&aux);
                vet[aux] += 1;
        }
        cont = 0;
        
        for(i = 0; i < tam; i++){
             if(vet[i] > 1)
                cont++;
        }
            printf("%lld\n",cont);          
    }
    return 0;
}


