#include <stdio.h>
#include <unistd.h>
int main(){
	int a=1;
	int b;
	#pragma omp parallel
		while (a==1) {
		b+1;
		};
		
		
};
