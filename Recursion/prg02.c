#include<stdio.h>
void fun(){
	static int x=0;
	printf("%d \n",++x);
	fun();
}
void main(){
	fun();
}
// program with runtime error segmentation fault at the end
