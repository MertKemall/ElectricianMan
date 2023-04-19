#include <stdio.h>
#include <stdlib.h>

int main(){

    int day,month,year;
    printf("Lutfen tarihi giriniz (gun.ay.yil): ");
    scanf("%d%d%d", &day, &month, &year);
     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        if(month==2){
            if(day>=1&&day<=28){
                day++;
                printf("%d.%d.%d",day,month,year);
            }
            else if(day==29){
               month++,day=1;
               printf("%d.%d.%d",day,month,year);
            }
        }
            else if(month==12){
                if(day>=1&&day<=30){
                    day++;
                    printf("%d.%d.%d",day,month,year);
                }
                else{
                    year++,day=1,month=1;
                    printf("%d.%d.%d",day,month,year);

                }       
            }
            
            
        
     }
     else{
        if(month==1||month==3||month==5||month==7||month==8||month==10){
        if(day>=1&&day<=30){
            day++;
            printf("%d.%d.%d",day,month,year);
        }
        else{
            month++,day=1;
            printf("%d.%d.%d",day,month,year);
        }
     }
     else if(month==4||month==6||month==9||month==11){
        if(day>=1&&day<30){
            day++;
            printf("%d.%d.%d",day,month,year);
        }
        else{
            month++,day=1;
            printf("%d.%d.%d",day,month,year);
        }
     }
     else if(month==12){
        if(day>=1&&day<=30){
            day++;
            printf("%d.%d.%d",day,month,year);
        }
        else{
            year++,day=1,month=1;
            printf("%d.%d.%d",day,month,year);
        }
     }
     else if(month==2){
        if(day>=1&&day<=27){
            day++;
            printf("%d.%d.%d",day,month,year);
        }
        else{
            month++,day=1;
            printf("%d.%d.%d",day,month,year);
        }
     }
     else{
        printf("Gecersiz tarih girildi..!!!");
     }
   

     }
     





    return 0;
}