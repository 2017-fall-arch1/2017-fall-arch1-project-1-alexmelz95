/* Employee items */
struct Employee{
  Employee* left;
  Employee* right;
  char* name;
};

Employee* newEmployeeList(char* name);

void insert(char* name);

void insertEmployee(Employee* tempRoot, char* name);

void delete(char* name);

void deleteEmployee(Employee* tempRoot, char* name);

void inorderSuccessor(Employee* tempRoot);

void printEmployees();
