//basic prg for search letter in char arr[]
#include<stdio.h>
int search(char arr[],int size,char c){
//	static int i;
	for(int i=0;i<size;i++){
	  
	  if(c==arr[i]){
           
            return i; 
           }
	  
	}
  return -1;
}



void main(){
    char arr[]={'A','B','B','C','D','E'};
    int ret=search(arr,6,'Z');
    printf("%d\n",ret);
}
