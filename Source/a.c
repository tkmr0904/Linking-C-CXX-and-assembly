#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>


extern /*"C"*/ int ad2(int a, int b);          //b.asmとリンク
extern /*"C"*/ int WRITE2(char const* array);  //b.asmとリンク
// "C"はつける必要がない というか付けられない



extern void output(int);//c.cppとリンク





int main(int argc, char *argv[]) 
{
  WRITE2("Hello World\n");


  //system("gnome-terminal");


  printf("%d\n", ad2(1,5));

  output(1);
  

  return 0;
}