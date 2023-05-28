//recursion code for search character in array
#include<stdio.h>
int search(char arr[],int size,char ch){
	if(size==0){
        return -1;		
	}
	if(arr[size-1]==ch){
		return size-1;
	}
	return search(arr,size-1,ch);
}
void main(){
	char arr[]={'A','B','C','D','E'};
	int ret=search(arr,5,'z');
	printf("%d\n",ret);
}
