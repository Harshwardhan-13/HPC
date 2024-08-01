
#include <stdio.h>
#include <malloc.h>

/* Write a program that declare an integer variable, assigns it a value and then prints its address using a pointer */

/*
int main()
{
    int num = 42;
    int *p = &num;

    printf("The value of num is: %d\n", num);
    printf("The address of num is: %d\n", (void *)p);

    return 0;
}
*/


/* Swap numbers */

/*
void swap_numbers(int *ptr1, int *ptr2) 
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    swap_numbers(&num1, &num2);

    printf("The swapped numbers are: %d %d", num1, num2);
}
*/
/* Declare an integer array, initialize it, and use a pointer to print each elements in the array */

/*
int main () 
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;

  printf("%p\n", ptr);
  return 0;
}
*/

/* Sum of array using pointer */
/*

void main()
{
  int i, n;
  int sum =0;
  int *a;

  printf("Enter the size of array A \n");
  scanf("%d", &n);

  a = (int *) malloc(n * sizeof(int));

  printf("Enter Element of the list \n");

  for(i = 0; i < n; i++)
    {
      scanf("%d", a + i);
    }

  for (i = 0; i < n; i++)
    {
      sum = sum + *(a + i);
    }

  printf("Sum of all elements in the array is %d\n", sum);
  return 0;
}
*/

/* Write a program that takes an array of integers and reverses it using pointers.*/

/*
void reverseArray(int *arr, int size)
{
  int *start = arr;
  int *end = arr + size - 1;

  while (start < end)
    {
      int temp = *start;
      *start = *end;
      *end = temp;
      start++;
      end--;
    }
}
int main() 
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++)
    {
      printf("%d", arr[i]);
    }

  reverseArray(arr, size);

  printf("\nRevrsed array: ");
}
*/

// Create a program to find the largest and smallest elements in an array using pointers.
/*
void findLargest(int* arr, int N)
{
  int i;
  for (i = 1; i < N; i++) {
    if (*arr < *(arr + i)) {
      *arr = *(arr + i);
    }
  }
  printf("%d ", *arr);
}
int main()
{
  int i, N = 4;

  int* arr;
  arr = (int*)calloc(N, sizeof(int));

  if (arr == NULL) {
    printf("No memory allocated");
    exit(0);
  }
  *(arr + 0) = 14;
  *(arr + 1) = 12;
  *(arr + 2) = 19;
  *(arr + 3) = 20;

  findLargest(arr, N);
  return 0;
}
*/

//Write a program in C that uses a function pointer to call a function that adds two integers
/*
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer
    int (*funcPtr)(int, int);

    // Assign the address of the 'add' function to the pointer
    funcPtr = add;

    // Call the function through the pointer
    int result = funcPtr(5, 3);

    printf("Result: %d\n", result);

    return 0;
}
*/

//

/*
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
  operation operations[] = {add, subtract, multiply, divide};
  char options[][15] = {"Addition", "Subtraction", "Multiplication", "Division"};

  int choice;
  double a, b;
  for (int i = 0; i < sizeof(options) / sizeof(options[0]); ++i) {
    printf("%d. %s\n", i + 1, options[i]);
  }
  printf("Enter your choice: ");
  scanf("%d", &choice);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &a, &b);

  if (choice < 1 || choice > sizeof(operations) / sizeof(operations[0])) {
    printf("Invalid choice!\n");
    return 1;
  }
  double result = operations[choice - 1](a, b);
  printf("Result: %.2lf\n", result);

  return 0;
}
*/

// Write a program to dynamically allocate memory for an array of integers, initialize it with values, and then free the allocated memory.
/*

int main() {
  int n, *ptr;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  for (int i = 0; i < n; ++i) {
    ptr[i] = i + 1;
  }

  printf("Array elements: ");
  for (int i = 0; i < n; ++i) {
    printf("%d ", ptr[i]);
  }
  printf("\n");
  free(ptr);

  return 0;
}
*/

//
/*
int main() {
    char *str;
    int size;

    printf("Enter the size of the string: ");
    scanf("%d", &size);
    str = (char *)malloc((size + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf(" %[^\n]s", str);

    printf("You entered: %s\n", str);
    free(str);

    return 0;
}
*/
// Write a program that prints the number of command-line arguments passed to it.
/*
int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    return 0;
}
*/

//Create a program that prints each command-line argument on a new line.
/*
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
*/

//Create a program that prints each command-line argument on a new line.
/*
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
*/

// Write a program that takes a single string from the command line and reverses it.
/*
void reverseString(char *str) {
  int length = strlen(str);
  int start = 0;
  int end = length - 1;
  char temp;

  while (start < end) {
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
      printf("Usage: %s <string>\n", argv[0]);
      return 1;
  }

  char *inputString = argv[1];

  reverseString(inputString);
  printf("Reversed string: %s\n", inputString);

  return 0;
}
*/

//
/*
char* concatenateStrings(int argc, char *argv[]) {
  int totalLength = 0;
  for (int i = 1; i < argc; i++) {
      totalLength += strlen(argv[i]);
  }

  char *result = (char*)malloc((totalLength + 1) * sizeof(char));
  if (result == NULL) {
      printf("Memory allocation failed\n");
      exit(1);
  }

  result[0] = '\0'; // Initialize the result string
  for (int i = 1; i < argc; i++) {
      strcat(result, argv[i]);
  }

  return result;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
      printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
      return 1;
  }
  char *concatenatedString = concatenateStrings(argc, argv);
  printf("Concatenated string: %s\n", concatenatedString);
  free(concatenatedString);

  return 0;
}
*/

// Develop a program that takes a list of integers from the command line and calculates their average.
/*
double calculateAverage(int argc, char *argv[]) {
  int sum = 0;
  int count = argc - 1;

  for (int i = 1; i < argc; i++) {
      sum += atoi(argv[i]);
  }

  return (double)sum / count;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
      printf("Usage: %s <int1> <int2> ... <intN>\n", argv[0]);
      return 1;
  }
  double average = calculateAverage(argc, argv);
  printf("Average: %.2f\n", average);

  return 0;
}
*/

//Write a program in C that checks if the correct number of command-line arguments are provided and prints an error message if not.
/*
void checkArguments(int argc, int expectedArgs) {
  if (argc != expectedArgs) {
      printf("Error: Expected %d arguments, but got %d\n", expectedArgs - 1, argc - 1);
      printf("Usage: <program_name> <arg1> <arg2> ... <argN>\n");
      exit(1);
  }
}

int main(int argc, char *argv[]) {
  int expectedArgs = 4; // Example: expecting 3 arguments plus the program name
  checkArguments(argc, expectedArgs);

  printf("Correct number of arguments provided.\n");

  for (int i = 1; i < argc; i++) {
      printf("Argument %d: %s\n", i, argv[i]);
  }

  return 0;
}
*/

// Develop a program in C that validates whether the command-line arguments are integers and prints an error message for invalid inputs.
/*
int isValidInteger(char *str) {
  if (*str == '\0') {
      return 0;
  }
  if (*str == '-') {
      str++;
  }
  while (*str) {
      if (!isdigit(*str)) {
          return 0;
      }
      str++;
  }

  return 1;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
      printf("Usage: %s <int1> <int2> ... <intN>\n", argv[0]);
      return 1;
  }
  
  for (int i = 1; i < argc; i++) {
      if (!isValidInteger(argv[i])) {
          printf("Error: Argument %d ('%s') is not a valid integer.\n", i, argv[i]);
          return 1;
      }
  }
  printf("All arguments are valid integers.\n");

  return 0;
}
*/

// Write a program that prints all the environment variables passed to it.
/*

int main(int argc, char *argv[], char *envp[]) {
    int i = 0;
    while (envp[i] != NULL) {
        printf("%s\n", envp[i]);
        i++;
    }
    return 0;
}
*/

// Create a program in C that takes the name of an environment variable from the command line and prints its value.
/*
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <env_var_name>\n", argv[0]);
        return 1;
    }
    char *env_var_name = argv[1];
    char *env_var_value = getenv(env_var_name);
    if (env_var_value != NULL) {
        printf("%s=%s\n", env_var_name, env_var_value);
    } else {
        printf("Environment variable '%s' not found.\n", env_var_name);
    }

    return 0;
}
*/

// Create a program that takes a list of commands from the command line and executes them sequentially.
/*
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <command1> <command2> ... <commandN>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            perror("Fork failed");
            return 1;
        }

        if (pid == 0) {
            char *cmd[] = {argv[i], NULL};
            if (execvp(cmd[0], cmd) < 0) {
                perror("Exec failed");
                return 1;
            }
        } else {
            int status;
            waitpid(pid, &status, 0);
            if (WIFEXITED(status)) {
                printf("Command '%s' executed with exit status %d\n", argv[i], WEXITSTATUS(status));
            } else {
                printf("Command '%s' did not terminate normally\n", argv[i]);
            }
        }
    }
    return 0;
}
*/

//