#include<stdio.h>
int main(){
	
	int i, n;
	float inputArr[40];
	int oiArr[10]={0,0,0,0,0,0,0,0,0,0};
	float Ei=n/10;
	float lastCol[10];
	float lastColSum=0.0;
	float alpha = 0.05;
	
	printf("Enter the number of data: ");
	scanf("%d",&n);
	
	printf("Enter the data: ");
	
	for(i=0; i<n; i++){
		printf("\n[%d]: ",i);
		scanf("%f",&inputArr[i]);
	}
	
	printf("\n\nDividing the data in 10 intervals: ");
	
	for(i=0; i<n; i++){
		
		if(inputArr[i]>=0 && inputArr[i]<0.1){
			oiArr[0]++;
		}else if(inputArr[i]>=0.1 && inputArr[i]<0.2){
			oiArr[1]++;
		}else if(inputArr[i]>=0.2 && inputArr[i]<0.3){
			oiArr[2]++;
		}else if(inputArr[i]>=0.3 && inputArr[i]<0.4){
			oiArr[3]++;
		}else if(inputArr[i]>=0.4 && inputArr[i]<0.5){
			oiArr[4]++;
		}else if(inputArr[i]>=0.5 && inputArr[i]<0.6){
			oiArr[5]++;
		}else if(inputArr[i]>=0.6 && inputArr[i]<0.7){
			oiArr[6]++;
		}else if(inputArr[i]>=0.7 && inputArr[i]<0.8){
			oiArr[7]++;
		}else if(inputArr[i]>=0.8 && inputArr[i]<0.9){
			oiArr[8]++;
		}else if(inputArr[i]>=0.9 && inputArr[i]<1.0){
			oiArr[9]++;
		}else{
			printf("\nValue not in range.");
		}
		
	}
	
	for(i=0; i<n; i++){
		lastCol[i]=((oiArr[i]-Ei)*(oiArr[i]-Ei))/Ei;
	}
	
	for(i=0; i<n; i++){
		lastColSum=lastColSum+lastCol[i];
	}
	
	printf("\nCalculated Value = %f", lastColSum);
	
	if(lastColSum > 16.9){
		printf("\n\nThe value of xnotsquare is %f \n The value for xnotsquare(0.05,9) = 16.9.",lastColSum);
		printf("\nSince the value of xnotsquare is less than value of xnotsquare so the null hypothesis is accepted ");
	}else{
		printf("\n\nThe value of xnotsquare is %f \n The value for xnotsquare(0.05,9) = 16.9.",lastColSum);
		printf("\nSince the value of xnotsquare is not less than value of xnotsquare so the null hypothesis is rejected ");
	}
	
} 
