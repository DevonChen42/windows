// save file squareroot.c
// compile gcc squareroot.c -o squareroot.exe
// run ./squareroot.exe
#include <stdio.h>
#include <math.h>
// define functions
float squareroot(float aa);

float main(){
  float a,s;
  printf("Input a number : ");
  scanf("%f" ,&a);
  printf("The number you typed was %f\n",a);
  s = squareroot(a);
  printf("The square root of %f is %f\n",a,s);
  return 0;
}
float squareroot (float a){
  float s = sqrt(a);
  return s;
}