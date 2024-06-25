#include<stdio.h>
int main(){
	int x0, x1;
	int a, c, m;
	int i, n;
	int arr[200];
	
	printf("Enter the seed value x0: ");
	scanf("%d",&x0);
	printf("Enter the value of a, c and m: ");
	scanf("%d%d%d",&a,&c,&m);
	printf("How many random numbers do you want?: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		x1 = (a*x0+c)%m;
		arr[i] = x1;
		x0 = x1;
	}
	printf("The random numbers generated are: ");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
}
