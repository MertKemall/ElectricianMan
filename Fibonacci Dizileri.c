#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=1,y=1,z=0,temp;

    printf("Fibonacci sayı dizileri:");
    scanf("%d",&temp);
    z=x+y;
    while(temp>0){
       printf("%d\n%d\n%d\n",x,y,z);
       x=y+z;
       y=x+z;
       z=x+y;
       temp--;
       
    }
  



    return 0;
}