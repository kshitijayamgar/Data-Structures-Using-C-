#include<stdio.h>
int x=0;    //global var
void fun(){
	printf("%d\n",++x);
	fun();
}
void main(){
	fun();
}
/* 
  ha chukicha prg ahe ithe global var use kelay he check karnyasthi ki maagchya prg mde static var use kela hota
  static variable  aani global variable  donhi variable data section vr store hotat,
  pan asa nemka kay farak pdto he bagmyasathi ha prg 
  nit lksh deel tr hya prg compilation  ntr as o/p kiti stack frame push hotat he imp ahe tyane 
  hya donhi variable mdhla farak farak clear hoil..
 result =300 kiva 200 stack frame kmi hotat jeva global var use krto  */
