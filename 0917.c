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
   printf("computer (%d 만큼 더함): %d\n",input,n);
   if(n>=31) printf("승리\n");
  }
  do{
  printf("1~3까지 중 수를 입력하세요: ");
  scanf("%d", &x);
  if(x>3||x<1) printf("1~3까지 입력하세요\n");
  }while(x>3||x<1);
  n+=x;
  printf("gamer (%d 만큼 더함) : %d\n",x,n);
  if(n>=31) printf("패배\n");
  if(i!=2)
   i+=1;
 }
 
 return 0;
}
char ch(){
 char ch1;
 printf("g(gamer)과 c(computer)중 누가 먼저 시작할까요?");
 scanf(" %c", &ch1);
 if(ch1=='g') return 1;
 else if(ch1=='c') return 2;
 else return ch();
} 