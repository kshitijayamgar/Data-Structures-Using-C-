#include <stdio.h>
 
// Function to swap two given characters
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
 
// Recursive function to reverse a given string
void reverse(char *str, int k)
{
    static int i = 0;
 
    // if the end of the string is reached
    if (*(str + k) == '\0') {
        return;
    }
 
    reverse(str, k + 1);
 
    if (i <= k) {
        swap(&str[i++], &str[k]);
    }
}
 
void  main()
{
    char str[] = "Light";
   
     printf("original string is:");
      for(int i=0;i<5;i++){
        printf("%c",str[i]);
	}

      printf("\n");
    reverse(str, 0);
    printf("Reverse of the given string is:  %s", str);
 
    printf("\n");
}
