#include<stdio.h>


int main()

{

    int i=0,tutucu,kalan;
    int binary[4];
    char mycharacter;
    
    scanf("%x",&mycharacter);
    tutucu=mycharacter;
    while(tutucu>0){
        
        kalan=tutucu%2;
        binary[i]=kalan;
        tutucu/=2;
        i++;
        
    }
    for(i=i-1;i>=0;i--){
        printf("%d",binary[i]);
    }
   
   
    
    return 0;




}
