/* static varible cha use krun */
#include<stdio.h>
void fun(){
	static int x=0;
	printf("%d \n",++x);
	fun();
}
void main(){
	fun();
}
// ha pn  chukicha program ahe he bgnyasathi ki jeva aapn static var use krun prg lihtoy teva kiti stack frames push hotat  dont cosider this prg
