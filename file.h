#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int CheckingFile(char filename[]) {
   FILE *file = fopen(filename, "r");
   if (file) {
      printf("File exists.\n");
      fclose(file);
      return 1;
   } else {
      printf("File does not exist.\n");
      return 0;
   }
}
int ReadFromFile(char filename[]) {
   FILE *file = fopen(filename, "r");
   if (file == NULL) {
      printf("Failed to open the file.\n");
      return 0;
   }

   char line[1000];
   while (fgets(line, sizeof(line), file) != NULL) {
      printf("%s\n", line);
   }
   fclose(file);
   return 1;
}
int WriteToFile(char filename[], char content[]) {
   FILE *file = fopen(filename, "a");
   if (file == NULL) {
      printf("Failed to open the file.\n");
      return 0;
   }

   fprintf(file, " %s", content);
   printf("successfully written...");
   fclose(file);
   return 1;
}