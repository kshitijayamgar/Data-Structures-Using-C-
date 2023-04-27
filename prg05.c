//fibonacci series code for specific number ie fibonacci of 5 =5,7=13 etc
#include<stdio.h>
int fibo(int N){
	if(N==1){
		return 1;
	}
	if(N==0){

	  return 0;
	}
	return fibo(N-1)+fibo(N-2);
}
void main(){
	int y=fibo(7);
	printf("fibo:%d\n",y);
}
