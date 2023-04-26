/*sum of nums using Recursion */
#include<stdio.h>
int x=0;
int  fun(int x){
  printf("number:%d\n",x);
static  int sum=0;
  sum=sum+x;
  if(x!=1){
	  fun(--x);
  }
   return sum;
}
void main(){
        
  int x=fun(5);
  printf("sum:%d\n",x);
}
//ha prg siranii chukicha deelay muddam correct it ..
//ho ho kela me correct 25 April 2023
