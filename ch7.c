#include <stdio.h>

char inv(char x[]){
  char inv[5];
  for(int i =0;i<5;i++){
    inv[4-i] = x[i];
  }
  printf("%s\n",inv);
}

int main(){

  char x[] = "ziyad";
  inv(x);

  printf("%s",x);

  return 0;
}
