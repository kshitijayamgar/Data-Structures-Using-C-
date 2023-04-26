/* simple prg for print  1-10 number */
#include<stdio.h>
void fun(int x){
for(int i=1;i<=x;i++){
	printf("%d\n",i);
	
    }
  printf("\n");
}
void main(){
	fun(5);
}
//using this program we can write the recursion program for this program using this code as refernce
