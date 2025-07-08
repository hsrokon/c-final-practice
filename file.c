#include <stdio.h>

int main(){
    char line[250];
    FILE *fp, *fp2;

    /*
    fp = fopen("student.txt", "r");

    if(fp==NULL){
        printf("Error opening file\n");
        return;
    }

    while(fgets(line, sizeof(line), fp)){
        printf("%s\n", line);
    }

    fclose(fp);
    */

    fp2 = fopen("write.txt", "w");
    if(fp2==NULL){
        printf("Error opening file 2\n");
        return;
    }

    fprintf(fp2, "I'm writing again\n");
    fclose(fp2);


    return 0;
}
