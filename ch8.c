#include <stdio.h>

int verifi(int x){
  if (x%2 ==0){
    return 0;
  }
  else{
    return 1;
  }
}

int main(){

  int n;
  scanf("%d",&n);

  if (verifi(n) == 0) {
    printf("Le nombre est PAIR.");
  }
  else{
    printf("Le nombre est IMPAIRE");
  }

  return 0;
}
