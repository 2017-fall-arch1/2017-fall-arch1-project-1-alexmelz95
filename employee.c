#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "employee.h"

//Creates a new employee root
struct Employee *NewEmployeeList(char *name){
  struct Employee *root = (struct Employee *)malloc(sizeof(struct Employee));
  root->name = name;
  root->left = root->right = NULL;
  return root;
};

//Inserts employee node in the correct BST structure
struct Employee *insertEmployee(struct Employee *root, char *name){
  if(root == NULL){
    return NewEmployeeList(name);
  }
  //if the name lexicographically comes before the name of the current node
  else if(strcmp(name, root->name) < 0){
    root->left = insertEmployee(root->left, name);
  }
  //if the name lexicographically comes after the name of the current node
  else{
    root->right = insertEmployee(root->right, name);
  }
  return root;
}

/*
Algorithm for deletion taken from GeeksforGeeks and implemented
in C by me
 */

struct Employee *deleteEmployee(struct Employee *root, char *name){
  if(root == NULL){
    return root;
  }
  //travels to where the root you need is
  if(strcmp(name, root->name) < 0){
    root->left = deleteEmployee(root->left, name);
  }
  else if(strcmp(name, root->name) > 0){
    root->right = deleteEmployee(root->right, name);
  }
  //if the name is equal to the name of the node
  else{
    //if node to be deleted only has one child
    if(root->right == NULL){
      return root->left;
    }
    if(root->left == NULL){
      return root->right;
    }
    //if node has two children
    root->name = inorderSuccessor(root->right);
    root->right = deleteEmployee(root->right, root->name);
  }
  return root;
}

//used in deleteEmployees
char *inorderSuccessor(struct Employee *root){
  char *successor = root->name;
  while(root->left != NULL){
    successor = root->left->name;
    root = root->left;
  }
  return successor;
}

void printEmployees(struct Employee *root){
  if(root != NULL){
    printEmployees(root->left);
    //Format of Print Statement taken from Geeks for Geeks
    printf("%s \n",root->name);
    printEmployees(root->right);
  }
}
