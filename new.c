#include<stdio.h>
#include<conio.h>

void School();
void College() ;

#pragma startup School 105
#pragma startup College
#pragma exit College
#pragma exit School 105

void main(){
printf("\nI am in main");
getch();
}

void School(){
printf("\nI am in School");
getch();
}

void College(){
printf("\nI am in College");
getch();
}
