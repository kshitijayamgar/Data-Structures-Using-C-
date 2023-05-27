//palindrome string
#include<stdio.h>
#include<stdbool.h>
bool palindrome(char arr[],int size){
	int start=0;
	int end=size-1;
	while(start<end){
	  if(arr[start]==arr[end]){
		  start++;
		  end--;
	  }
	   else{
		   return false;
	   }
	}

	return true;
}
void main(){
     char arr[]={'m','a','d','a','z'};
     bool ret=palindrome(arr,5);
     printf("%d\n",ret);
}
//if(start==end){
//palin(arr,start+1,end-1); } subproblem for recursion
