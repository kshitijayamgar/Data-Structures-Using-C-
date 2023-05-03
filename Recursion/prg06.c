#include <stdio.h>
int printpattern(int n){
   if(n>0) {
      printpattern(n-1);
      printf("*");
   }
}
int pattern(int n) {
   if(n>0) {
      pattern(n-1); //will recursively print the pattern
   }
   printpattern(n); //will reduce the n recursively.
   printf("\n"); //for new line
}
int main(int argc, char const *argv[]) {
   int n = 7;
   pattern(n);
   return 0;
}

output:-
/*

*
**
***
****
*****
******
*******


*/                                                                                                                                            
