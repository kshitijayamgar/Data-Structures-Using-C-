
#include<stdio.h>
void fun(int x){
	printf("%d \n",x);
	fun(--x);
}
void main(){
	fun(5);
}
// program with defect
