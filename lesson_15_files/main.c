#include <stdio.h>

int main() {

  FILE *fptr;
  fptr = fopen("file.txt", "r");

  char mystr[100];

  fgets(mystr, 100, fptr);

  
  // fprintf(fptr, "seni kim yig'latdi");
  
  fclose(fptr);
  
  printf("%s", mystr);

  return 0;
}