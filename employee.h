/* Employee items */
struct Employee{
  struct Employee* left;
  struct Employee* right;
  char* name;
};

struct Employee* newEmployeeList(char* name);

void insert(char* name);

struct Employee *insertEmployee(struct Employee* tempRoot, char* name);

void delete(char* name);

struct Employee *deleteEmployee(struct Employee* tempRoot, char* name);

char *inorderSuccessor(struct Employee* tempRoot);

void printEmployees();
