#include <stdio.h>
#include <string.h>
#include <string.h>
#include <string.h>

void intro(){
    printf("\n----WELCOME TO TIC-TAC-TOE----\n\n");
}

void grid(){
     
    char a[20];
    printf("       |        |       \n");
    printf("  %c    |   %c    |   %c   \n",a[1],a[2],a[3]);
    printf("_______|________|_______\n");
    printf("       |        |       \n");
    printf("  %c    |   %c    |   %c   \n",a[4],a[5],a[6]);
    printf("_______|________|_______\n");
    printf("       |        |       \n");
    printf("  %c    |   %c    |   %c   \n",a[7],a[8],a[9]);
    printf("       |        |       \n");

    printf("enter the value of a[1] :");
    scanf("%c",&a[1]);

    printf("enter the value of a[2] :");
    scanf("%c",&a[2]);

    printf("enter the value of a[3] :");
    scanf("%c",&a[3]);

    if(a[1]==a[2] && a[2]==a[3]){printf("YOu matched");} 
}

void choice(){
    char b,c,d;
    c='X';
    b='O';
    printf("choose one of signs between X and O :");
    scanf("%c",&c);
    if(d==b || d==c){printf("continue.\n");}
    else{printf("please choose a valid choice.\n");}
    
}



int main()
{
    grid();
    
     
    
    return 0;
}