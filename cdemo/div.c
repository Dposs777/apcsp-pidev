#include <stdio.h>

int main(){
int div = 5;
  for(int i = 0;i < 100; i++){
    if (!(i % div)){
      printf("%d\n", i);
     }
   }
}
