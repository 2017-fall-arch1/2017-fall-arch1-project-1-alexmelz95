#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "employee.h"

int main(void){
  int answer;
  char *name;
  int option;
  struct Employee *list = NULL;
  
  printf("HELLO AND WELCOME TO THE EMPLOYEE TERMINAL. PICK AN OPTION\n");
  option = 1;
  // list = NULL;
  while(option != 0){
    printf("1) Insert an Employee\n");
    printf("2) Delete an Employee\n");
    printf("3) Print your Employee List\n");
    scanf("%d", &answer);
  //While loop idea: Phillip Hassoun
    if(answer == 1){
      printf("Enter Employee Name\n");
      scanf("%s", name);
      if(list == NULL){
	list = insertEmployee(list, name);
      }
      else{
	insertEmployee(list, name);
      }
    }
    else if(answer == 2){
      printf("Enter Employee Name\n");
      scanf("%s", name);
      deleteEmployee(list, name);
    }
    else if(answer == 3){
      printf("Printing\n");
      printEmployees(list);
    }
    else{
      printf("Thank you for using the Employee Database. Have a nice day!");
      option = 0;
    }
    answer = 0;
  }
  return(0);
}
   
