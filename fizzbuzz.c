#include <stdio.h>

int main(){
  int i;
  for(i=1;i<=100;i++){
    if(i%3==0){
      if(i%5==0){
	printf("FOOBAR\n");
      }else{
	printf("FOO\n");
      }
    }else if(i%5==0){
      printf("BAR\n");
    }else{
      printf("%d\n",i);
    }
  }
  
  return 0;
}
