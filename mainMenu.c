#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "employee.h"

int answer;
char *name;

printf("HELLO AND WELCOME TO THE EMPLOYEE TERMINAL. PICK AN OPTION\n");
printf("1) Insert an Employee\n");
printf("2) Delete an Employee\n");
printf("3) Print your Employee List");
scanf("%d", &answer);

if(answer == 1){
  printf("Enter Employee Name");
  scanf("%s", name);
  insert(name);
 }

 else if(answer == 2){
  printf("Enter Employee Name");
  scanf("%s", name);
  delete(name);
 }
 else if(answer == 3){
  printf("Printing");
  printEmployees();
 }
 else{
   printf("ERROR: INCORRECT IMPUT");
 }
   
