#include <stdio.h>
#include <unistd.h>
#include <conio.h>

void haihesc (void);
void haihu(void);
void tatesc(void);
void tate(void);
void space(void);

int main(void){
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihesc();
	space();
	space();
	space();
	space();
	tatesc();
	space();
	space();
	space();
	space();
	tate();
	haihu();
	haihu();
	haihesc();
	space();
	tate();
	space();
	space();
	tatesc();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihu();
	haihesc();
	
	printf("���s����ɂ͂Ȃɂ��L�[�������Ă��������B");
	getch();
	return 0;
}

void haihesc(void){
	printf("-\n");
	sleep(1);
}
void haihu(void){
	printf("-");
	sleep(1);
}
void tatesc(void){
	printf("|\n");
	sleep(1);
}

void tate(void){
	printf("|");
	sleep(1);
}

void space(void){
	printf(" ");
}