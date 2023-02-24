#include <stdio.h>



int main(void) {
  FILE *ina;
  FILE *outa;
  char name[20], name2[20];  
    
    printf("enter your TXT: ");
    gets(name);
  
  ina = fopen("nameToUpdate.txt", "w");
  if(ina == NULL)
    printf("File could not be opened!");
  else {
    printf("File opened\n");
    fprintf(ina, "%s", name);
    fclose(ina);
  }

  outa = fopen("nameToUpdate.txt", "r");
  if(outa == NULL)
    printf("File could not be opened!");
  else {
    printf("File opened\n");
    fscanf(outa, "%s", name2);
    fclose(outa);
    printf("the TXT is: %s", name2);
  }


  return 0;
}