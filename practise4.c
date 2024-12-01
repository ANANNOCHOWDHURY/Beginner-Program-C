#include <stdio.h>

int main() {

  float TotalCharge, GBS;
  int choice;
  float TK;

  printf("\033[1;32mSelect the date package:\033[0m\n \033[0;32m1. Basic Package\n 2. Standard\n 3. Premium Package\033[0m\n");



      while(1){
         printf("Enter your choice:");
      scanf("%d",&choice);

      if (choice==1 || choice==2 || choice==3){
        break;
      }
      else{
            printf("\033[1;31mInvalide package!\n\033[0m");
           printf("\033[1;32mSelect the date package:\n 1. Basic Package\n 2. Standard\n 3. Premium Package\n\033[0m");

      }

      }


       printf("Enter the number of GBs you want to use:");
      scanf("%f",&GBS);

    if(choice==3){
        TK=150;
    }
    else if (choice==2){
        TK=100;
    }
    else if(choice==1){
        TK=50;
    }

    TotalCharge=GBS*TK;
    printf("The total charge for your package is:%.2f",TotalCharge);
    return 0;
}

