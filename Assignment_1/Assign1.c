
#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};


void initDate(struct Date* ptrDate){
    printf("Current ");
    ptrDate->day=25;
    ptrDate->month=8;
    ptrDate->year=2026;

}
void printDateOnConsole(struct Date* ptrDate){

    printf("Date = %d-%d-%d",ptrDate->day,ptrDate->month,ptrDate->year);

}

void acceptDateFromConsole(struct Date*ptrDate){
    printf("\n----- Enter Date -----");

    printf("\nEnter Day : ");

    scanf("%d",&ptrDate->day);
    
    printf("\nEnter Month : ");
    scanf("%d",&ptrDate->month);

    printf("\nEnter Year : ");
    scanf("%d",&ptrDate->year);
} 

int menuList(void){
int menu;
    printf("\n*****MENU****\n");
    printf("0. Exit \n");
    printf("1. Accept Date \n");
    printf("2. Print Date \n");
   

    printf("Choose Any menu for list  : \n");

    

    scanf("%d",&menu);
    return menu;
}
int main(){

    struct Date d1;
    

    initDate(&d1);
    

    int n;
   


    while((n = menuList())!=0){
        switch (n)
        {
            case 1:
                acceptDateFromConsole(&d1);
                break;
            case 2:
                printDateOnConsole(&d1);
                break;
            default:
                printf("Give valid choice");
                break;
        }
    }
    printDateOnConsole(&d1);

  
    return 0;
}