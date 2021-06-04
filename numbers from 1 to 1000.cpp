#include<stdio.h>
#include<conio.h>

 int main(void) 
 {
  static int i = 1;
  if (i <= 1000) 
  {
   printf("%d\n", i++);
   main();
  }
 getch();
}