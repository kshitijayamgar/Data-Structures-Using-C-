#include<stdio.h>
int x=0;    //global var
void fun(){
	printf("%d\n",++x);
	fun();
}
void main(){
	fun();
}
//program with runtime error segmetation fault
