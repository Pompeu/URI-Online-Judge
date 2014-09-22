/*      URI Online Judge | 1022
**		
**		TDA Racional
**
**      By Itacir Ferreira Pompeu
**
**      Instituto Federal Goiano Campus Morrinhos
*/
#include <cstdio>

int main(){

	int n;
	float r,N1,N2,D1,D2;
	char op,d;

	scanf("%i",&	n);
	while(n--){
		scanf("%f %c %f %c %f  %c %f"
			,&N1,&d,&D1,&op,&N2,&d,&D2);

		switch(op){
			case '+':
				r = (N1*D2 + N2*D1) / (D1*D2);
				printf("%.2f\n",r);
			break;
			case '-':
				r = (N1*D2 - N2*D1) / (D1*D2);
				printf("%.2f\n",r);
			break;
			case '*':
				r = (N1*N2) / (D1*D2);
				printf("%.2f\n",r);
			break;
			case '/':
				r = (N1/D1) / (N2/D2);
				printf("%.2f\n",r);
			break;
		}
	}

	return 0;
}