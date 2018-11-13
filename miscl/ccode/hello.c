// compile gcc hello.c -o hello.exe -lm
// run ./hello.exe
#include <stdio.h>
#include <math.h>
float main(){
  printf("HELLO WORLD " );
  printf("Value 2.0 ^ 8 = %lf\n", pow(2.0, 8));
  return 0;
}