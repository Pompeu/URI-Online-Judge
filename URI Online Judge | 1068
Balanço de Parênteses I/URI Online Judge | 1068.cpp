/*		URI Online Judge | 1068
**		
**		Balanço de Parênteses I
**
**		By Itacir Ferreira Pompeu
**
**		Instituto Federal Goiano Campus Morrinhos
*/
#include <cstdio>

#define ull long long int 

 
int main(void){
    ull um, i; 
    char nome[1001],*p;
 
    while(scanf("%s",nome)!=EOF){
        
        um=i=0;
        
        p = &nome[0];
        while(*p != '\0'){
 
            if(*p == '(' ){
                i++;
            }
            if(*p == ')' && i){
                i--;
            }else if(*p == ')' && !i){
				um++;
			}
            p++;
        }
        if(!i && !um){
            puts("correct");       
        }
        else{
            puts("incorrect");
        }
             
    }
return 0;
}
