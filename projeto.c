#include <stdio.h>
int soma(int a, int b){
	int soma_num = a+b;
	return soma_num;
}
int subtracao(int a, int b){
	return a - b;
}
int multi(int a, int b){
	return a*b;
}

int main(){
	printf("soma> %d", soma(20, 20));
	printf("\nsubt> %d", subtracao(20, 20));
	
}
