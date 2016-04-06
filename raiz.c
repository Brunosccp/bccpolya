#include <stdio.h>

	double raiz(double);

	int main(){
		double x;
			printf("Insira o número:");
			scanf("%lf",&x);

		printf("Raiz: %f\n",raiz(x));

	}
	double raiz(double x){
		int l;
		double xp=x;

		for(l=0; l<100; l++){
			xp=xp/2 + x/(2*xp);
		}

		return(xp);

	}