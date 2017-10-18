#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "employee.h"

Employee* root;

Employee* NewEmployeeList(char* name){
  root = (Employee*)malloc(sizeof(Employee));
  root->name = name;
  root->left = newEmployee->right = NULL;
  return root;
};

void insert(char* name){
  root = insertEmployee(root, name);
}

Employee* insertEmployee(Employee* tempRoot, char* name){
  if(tempRoot == null){
    tempRoot = (Employee*)malloc(sizeof(Employee));
    tempRoot->name = name;
  }
  else if(strcmp(name, tempRoot->name) < 0){
    tempRoot->left = insertEmployee(tempRoot->left, name);
  }
  else{
    tempRoot->right = insertEmployee(tempRoot->, name);
  }
  return tempRoot;
}

void delete(char* name){
  root = deleteEmployee(root, name);
}

/*
Algorithm for deletion taken from GeeksforGeeks and implemented
in C by me
 */

Employee* deleteEmployee(Employee* tempRoot, char* name){
  if(tempRoot == NULL){
    return tempRoot;
  }

  if(strcmp(name, tempRoot->name) < 0){
    tempRoot->left = deleteEmployee(tempRoot->left, name);
  }
  else if(strcmp(name, tempRoot->name) > 0){
    tempRoot->right = deleteEmployee(tempRoot->right, name);
  }
  else{
    if(tempRoot.right == null){
      return tempRoot.left;
    }
    if(tempRoot.left == null){
      return tempRoot.right;
    }
    
    tempRoot->name = inorderSuccessor(tempRoot->right);
    tempRoot->right = deleteEmployee(tempRoot-right, tempRoot->name);
  }
  return tempRoot;
}

char* inorderSuccessor(Employee* tempRoot){
  char* successor = tempRoot->name;
  while(tempRoot->left != NULL){
    successor = tempRoot->left->name;
    tempRoot = tempRoot->left;
  }
  return successor;
}

void printEmployees(){
  if(root != NULL){
    printEmployees(root->left);
    printf(root->name);
    printEmployees(root->right);
  }
}
    
