#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 3
char ch();
int main(){
 int i,input,n=0,x;
 srand((unsigned)time(NULL));
 i=ch();
 while (n<30){
  if(i==2){
   input=rand()%3 +1;
   n+=input;
   printf("computer (%d ��ŭ ����): %d\n",input,n);
   if(n>=31) printf("�¸�\n");
  }
  do{
  printf("1~3���� �� ���� �Է��ϼ���: ");
  scanf("%d", &x);
  if(x>3||x<1) printf("1~3���� �Է��ϼ���\n");
  }while(x>3||x<1);
  n+=x;
  printf("gamer (%d ��ŭ ����) : %d\n",x,n);
  if(n>=31) printf("�й�\n");
  if(i!=2)
   i+=1;
 }
 
 return 0;
}
char ch(){
 char ch1;
 printf("g(gamer)�� c(computer)�� ���� ���� �����ұ��?");
 scanf(" %c", &ch1);
 if(ch1=='g') return 1;
 else if(ch1=='c') return 2;
 else return ch();
} 