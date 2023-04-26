/* Recursion mnje kay?
 * -> ekhada problem ,sub problem mde divide krun,
 *   tya  problem ch solution find krnyasathi function la recursively call karne 
 *   mnje Recursion hoy
 *   WHY Recursion?
 *   -> To solve non-linear data structure...
 *   Lec: 23-january-2023
 *   */
#include<stdio.h>
void fun(int x){
	printf("%d \n",x);
	fun(--x);
}
void main(){
	fun(5);
}
// ha chukicha program ahe fkt concept clear honyasathi lihla hota dont consider it..
