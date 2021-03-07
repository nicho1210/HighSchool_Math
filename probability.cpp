#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double pro(int M, int i){
	double probability;
	int a;
	int b;
	int ans = 0;
	srand(time(NULL));
	for(b = 1; b <= M; b++){
		a = (rand() % M) + 1;
		if(a % i == 0)
			ans++;
	}
	probability = (float)ans / M;
	return probability;
}

int main(void){
	int i;
	int n;
	char h = '%';
	printf("input your maximum:\n");
	scanf("%d", &i);
	printf("input your factor:\n");
	scanf("%d", &n);
	double anspro;
	anspro = pro(i, n);
	printf("the probability is %f %c\n", anspro * 100, h);
	return 0;
}

