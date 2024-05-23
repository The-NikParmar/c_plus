#include <stdio.h>
int main()
 {
  int choice, qua, A1,A2,A3,A4,A5;
  int total=0;
  char ch;
  do{
  
  printf("\n===================Menu================");
  printf("\n1.Pizza \t Price = 180rs/pcs ");
  printf("\n2.Garlic\t Price = 120rs/pcs ");
  printf("\n3.Burger\t Price = 100rs/pcs ");
  printf("\n4.Redbull \t Price = 110rs/pcs ");
  printf("\n5.french-frise\t Price = 120rs/pcs ");

  printf("\n==================Choice================\n");

  printf("\nPlease  Enter Your Choice:-  \n");
  scanf("%d", &choice);

  if (choice == 1 ) {
    printf("You have Selected Pizza.");

    printf("\nEnter the quantity:-");
    scanf("%d", &qua);

    A1 = qua * 180;
    printf("Amount %d", A1);
  }
   else if (choice == 2) {
    printf("You have Selected Garlic.");

    printf("\nEnter the quantity:-");
    scanf("%d", &qua);

    A2 = qua * 120;
    printf("Amount %d", A2);
  } 
  else if (choice == 3) {
    printf("You have Selected Burger.");

    printf("\nEnter the quantity:-");
    scanf("%d", &qua);

    A3 = qua * 100;
    printf("Amount %d", A3);
  }
   else if (choice == 4) {
    printf("You have Selected Redbull.");

    printf("\nEnter the quantity:-");
    scanf("%d", &qua);

    A4 = qua * 110;
    printf("Amount %d", A4);
  }
   else if (choice == 5) {
    printf("You have Selected French-frise.");

    printf("\nEnter the quantity:-");
    scanf("%d", &qua);

    A5 = qua * 120;
    printf("Amount %d", A5);
  } 
  else {
    printf("Please select valid choice");
  }
  total=A1+A2+A3+A4+A5;  
  printf("\nThe total bill is:- %d",total);
  printf("\nDo you want place more orders? y & n :");
  scanf("\n%c",&ch);
  }while(ch=='y');
  return 0;
}
