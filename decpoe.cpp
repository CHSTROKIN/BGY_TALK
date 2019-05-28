#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#define max 1024*10
int const pas=678;
using namespace std;
int main(void){
	FILE *pf=NULL;
	char a[max];
	char b[max];
	memset(a,' ',sizeof(a));
	memset(b,' ',sizeof(b));
		pf=fopen("read.pas","r"); 
	fscanf(pf,"%s",a);
	puts(a);
	for(int i=0;i<sizeof(a);i++){
		int val;
		val=((int)a[i])^pas;
		b[i]=(char)val;
	}
	cout<<"___________________________________________________________________"<<endl;
	puts(b);
	pf=fopen("out.txt","w+");
	fprintf(pf,"%s",&b);
	cout<<"___________________________________________________________________"<<endl;
	return 0;
} 
