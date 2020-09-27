#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
	char in[32];
	float hbe,hcf,x,y;
	int a,b,c,d,e,f,end=3,con=1;
	system("chcp 65001");
	system("cls");
	while (con){
		printf("ax+by=c\ndx+ey=f\n\n\na=");
		fgets(in,32,stdin);
		a=atoi(in);
		system("cls");
		printf("%dx+by=c\ndx+ey=f\n\n\nb=",a);
		fgets(in,32,stdin);
		b=atoi(in);
		system("cls");
		printf("%dx+%dy=c\ndx+ey=f\n\n\nc=",a,b);
		fgets(in,32,stdin);
		c=atoi(in);
		system("cls");
		printf("%dx+%dy=%d\ndx+ey=f\n\n\nd=",a,b,c);
		fgets(in,32,stdin);
		d=atoi(in);
		system("cls");
		printf("%dx+%dy=%d\n%dx+ey=f\n\n\ne=",a,b,c,d);
		fgets(in,32,stdin);
		e=atoi(in);
		system("cls");
		printf("%dx+%dy=%d\n%dx+%dy=f\n\n\nf=",a,b,c,d,e);
		fgets(in,32,stdin);
		f=atoi(in);
		system("cls");
		printf("%dx+%dy=%d\n%dx+%dy=%d",a,b,c,d,e,f);
		hbe=d*b-a*e;
		hcf=d*c-a*f;
		y=hcf/hbe;
		x=(c-b*y)/a;
		system("cls");
		if(isfinite(x)||isfinite(y)){
			printf("%dx+%dy=%d\n%dx+%dy=%d\n\n\n(x,y)=(%f,%f)\n",a,b,c,d,e,f,x,y);
		}else{
			printf("%dx+%dy=%d\n%dx+%dy=%d\n\n\n(x,y)=(infinite result)\n",a,b,c,d,e,f);
		}
		printf("続けて計算しますか？\tはい/いいえ(1/0)");
		fgets(in,32,stdin);
		end=atoi(in);
		if(0==end){
			con=0;
		}
		system("cls");
	}
	return 0;
}