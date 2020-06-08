#include <stdio.h>

int main(void) {
  FILE *myFile;
  int n, i, sum=0, max=0;
  myFile = fopen("somenumbers.txt", "r");
  //printf("Hello World\n");
  fscanf(myFile, "%d,", &n );
  int data[n];
  for(i=0; i<n ;i++) {
    fscanf(myFile, "%d", &data[i]);
    if(max < data[i])
      max = data[i];
    sum = sum + data[i];
  }
  fclose(myFile); 
  FILE *fptr = fopen("answer-hw3", "w");
  printf("average: %lf\n", 1.0*sum/n);
  printf("max: %d\n", max);
  fprintf(fptr, "average: %lf\n", 1.0*sum/n);
  fprintf(fptr, "max: %d\n", max);
  fclose(fptr); 
  return 0;
}