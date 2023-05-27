/*
#include<stdio.h>
#include<stdbool.h>
bool palin(char arr[],int start,int end){
  if(arr[start]!=arr[end]){
     return  false;
      }     
     if(arr[start]==arr[end]&& palin(arr,start+1,end-1)){
	 return true;
   }
 } 
void main(){
    char arr[]={'m','a','d','a','m'};
	bool ret=palin(arr,0,4);
	printf("%d",ret);
}
*/

 #include<stdio.h>
#include<stdbool.h>
bool palin(char arr[],int start,int end){
    //int start=0;      
    //int end=size-1;
  if(arr[start]!=arr[end]){
     return  false;
      }
     if(arr[start]==arr[end]){
      return palin(arr,start+1,end-1);
         
   }
 }
void main(){
    char arr[]={'m','a','d','a','m'};
        bool ret=palin(arr,0,4);
        printf("%d",ret);
}

