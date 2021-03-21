#include<stdio.h>
int anans(int a1, int n, int d);
int first_number(int an, int n, int d);
int nans(int a1, int d, int an);
int dans(int a1, int n, int an);
int main(void){
	int a1;
	int d;	
	int n;
	int an;
	int ans;
	int aa;
	int nn;
	int dd;
	int ann;
	printf("if having the factor ""a1"" in the formula -> type 1, if not -> type 0\n ");
	scanf("%d", &aa);
	if(aa == 0){
		printf("Please tell d = :\n");
		scanf("%d", &d);
		printf("Please tell n = :\n");
		scanf("%d", &n);
		printf("Please tell an:\n");
		scanf("%d", &an);
		int afirst;
		afirst = first_number(an, n, d);
		printf("a1 = %d", afirst);
		return 0;
	}
	printf("if having the factor ""d"" in the formula -> type 1, if not -> type 0\n ");
	scanf("%d", &dd);
	if(dd == 0){
		printf("Please tell a1 = :\n");
		scanf("%d", &a1);
		printf("Please tell n = :\n");
		scanf("%d", &n);
		printf("Please tell an:\n");
		scanf("%d", &an);
		int dans1;
		dans1 = dans(a1, n, an);
		printf("d = %d\n", dans1);
		return 0;
	}
	printf("if having the factor ""n"" in the formula -> type 1, if not -> type 0\n ");
	scanf("%d", &nn);
	if(nn == 0){
		printf("Please tell a1 = \n");
		scanf("%d", &a1);
		printf("Please tell d = :\n");
		scanf("%d", &d);
		printf("Please tell an:\n");
		scanf("%d", &an);
		int nans1;
		nans1 = nans(a1, d, an);
		printf("n = %d\n", nans1);
		return 0;
	}
//	printf("if having the factor ""an"" in the formula -> type 1, if not -> type 0\n ");
//	scanf("%d", &ann);
	if(aa == 1 && dd == 1 && nn == 1){
		printf("Please tell a1 = \n");
		scanf("%d", &a1);
		printf("Please tell d = \n");
		scanf("%d", &d);
		printf("Please tell n = \n");
		scanf("%d", &n);
		int anans1;
		anans1 = anans(a1, n, d);
		printf("an = %d", anans1);
		return 0;
	}
	
	
}


int first_number(int an, int n, int d){
	int aa;
	aa = an - n * d + d;
	return aa;	
}

int anans(int a1, int n, int d){
	int ann;
	ann = a1 + (n-1) * d;
	return ann;
}

int nans(int a1, int d, int an){
	int nn;
	nn = (an - a1 + d) / d;
	return nn;
}

int dans(int a1, int n, int an){
	int dd;
	int x = an - a1;
	int y = n - 1;
	dd = x / y;
	printf("0x%x 0x%x 0x%x\n", an, a1, n);
	return dd;
}


