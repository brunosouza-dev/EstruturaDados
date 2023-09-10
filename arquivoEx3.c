#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Declaring variables 
  FILE *archive;
  char line[100];
  int i;

  // Opening the 'txt' archive
  archive = fopen("data.txt", "r");
  
  // Verifying if archive is null
  if (archive == NULL) {
    printf("Error to open the archive");
    exit(1);
  }

  // Reading and recording the read text into de variables
  while (fgets(line, sizeof(line), archive) != NULL) {
    i++;
    printf("%d %s", i, line);
  }

  // Closing the archive
  fclose(archive);

  return 0;
}