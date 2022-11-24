//GTG

# include <stdio.h>
# define NUM_STUDENTS 3
# define NUM_TESTS 4

void printReport(const int arr[][NUM_TESTS], size_t numStudents, size_t numTests);
int maxGrade(const int arr[][NUM_TESTS], size_t numStudents, size_t numTests);
int minGrade(const int arr[][NUM_TESTS], size_t numStudents, size_t numTests);
double average(int tests[], size_t numTests);

int main(void){
  int studentGrades[NUM_STUDENTS][NUM_TESTS] = {{77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};  
  
  printReport(studentGrades, NUM_STUDENTS, NUM_TESTS);
  puts("");

  printf("Lowest: %d\nHighest: %d\n", 
    minGrade(studentGrades, NUM_STUDENTS, NUM_TESTS),
    maxGrade(studentGrades, NUM_STUDENTS, NUM_TESTS));
  
  for (size_t i = 0; i < NUM_STUDENTS; i++){
    printf("The average for student %zu is %.2f\n",
      i, average(studentGrades[i], NUM_TESTS));
  }

}

void printReport(const int arr[][NUM_TESTS], size_t numStudents, size_t numTests){
  
  puts("The array is:");

  printf("%16s", "");
  for (int i = 0; i < numTests; i++){
    printf(" [%d] ", i);
  }

  puts("");

  for (size_t i = 0; i < numStudents; i++){
    
    printf("studentGrades[%zu]", i);

    for (size_t j = 0; j < numTests; j++){
      printf(" %2d  ", arr[i][j]);
    }

    puts("");
  }

}

int maxGrade(const int arr[][NUM_TESTS], size_t numStudents, size_t numTests){
  int res = arr[0][0];

  for (size_t i = 0; i < numStudents; i++){
    for (size_t j = 0; j < numTests; j++){
      if (res < arr[i][j]){
        res  = arr[i][j];
      }
    }
  }

  return (res);
}

int minGrade(const int arr[][NUM_TESTS], size_t numStudents, size_t numTests){

  int res = arr[0][0];

  for (size_t i = 0; i < numStudents; i++){
    for (size_t j = 0; j < numTests; j++){
      if (res > arr[i][j]){
        res  = arr[i][j];
      }
    }
  }

  return (res);
}

double average(int tests[], size_t numTests){
  int total = 0;

  for(size_t  i = 0; i < numTests; i++){
    total += tests[i];
  }

  return (double) total / numTests;
}

//TYJC
