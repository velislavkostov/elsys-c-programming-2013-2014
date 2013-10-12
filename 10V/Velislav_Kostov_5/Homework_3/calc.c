#include <stdio.h>
#include <string.h>

void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);
void mod(int a,int b);

int main(){
const char *error ="Error\0";
char *commands[] = {"add\0","sub\0","mul\0","div\0","mod\0"};
char choice[5];
int num1, num2;
scanf("%d %s %d", &num1, choice, &num2);

if(strcmp(commands[0], choice) == 0)
	{		
	add(num1,num2);
	}
else if(strcmp(commands[1], choice) == 0)
	{
	sub(num1,num2);
	}
else if(strcmp(commands[2], choice) == 0)
	{
	mul(num1,num2);
	}
else if(strcmp(commands[3], choice) == 0)
	{
	div(num1,num2);
	}
else if(strcmp(commands[4], choice) == 0)
	{
	mod(num1,num2);
	}
else printf("%s\n",error);

return 0;
}

void add(int a,int b){
printf("%d\n",a + b);
}

void sub(int a,int b){
printf("%d\n",a - b);
}

void mul(int a,int b){
printf("%d\n",a * b);
}

void div(int a,int b){
printf("%d\n",a / b);
}

void mod(int a,int b){
float c;
c = a % b;
printf("%f\n",c);
}

