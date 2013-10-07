#include <stdio.h>

inline void space();
void lucas_sequence(int n);
void twin_primes();
int is_prime(int n);


int main(){
	int choice;
	do{
	printf("\n\n\n\tM\tE\tN\tU\n\t_\t_\t_\t_ \t\n\tType in [1] for |Lucas Numbers|\n\tType in [2] for |Twin Primes|\n\tType in [0] for |EXIT|\t\n\n\n");
	printf("\tEnter your choice: ");
	scanf("%d",&choice);
	space();
		switch( choice ){
			case 1:lucas_sequence(100);
			break;

			case 2:twin_primes();
			break;

			case 0: break;
			default: return 1;
		}
	}while(choice != 0);
return 0;
}

void lucas_sequence(int n){

unsigned long L0 = 2, L1 = 1, Ln;
int i;
	for(i = 0;i<=n;i++){
		if(i == 0){
		printf("\n\n\n\t   |N|        LUCAS NUMBER\n\n\n");
		printf("\t[ n = %d ] -\t [ %lu ]\t\n\n\n",i,L0);
		}
		else if(i == 1){
		printf("\t[ n = %d ] -\t [ %lu ]\t\n\n\n",i,L1);
		}
		else {
		Ln = L0 + L1;
		printf("\t[ n = %d ] -\t [ %lu ]\t\n\n\n",i,Ln);
		L0 = L1;
		L1 = Ln;
		}
	
	}


}

void twin_primes(){

const int m = 10;
int i;
int i2;
short printed = 0;
printf("\tTwin Primes to %d\t\n",m);

	for (i = 2; i>0; i++){

		i2 = i + 2;

		if (is_prime(i)==0 && is_prime(i2)==0){
		printf("\t[%d ; %d]\t\n", i, i2);
		printed = printed + 1;

		if (printed == m) 
		break;
		}
	}
}

int is_prime(int n){

int i,i2;
int prime;
prime = 0;
	for(i = 2; i <= n - 1 ;i++){
		if(n % i == 0){ //chisloto ne e prosto
		prime = 1;
		break;
		}
	}
return prime;
}


inline void space(){
printf("\n\n\n");
}
