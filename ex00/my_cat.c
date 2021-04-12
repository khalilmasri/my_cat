#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    FILE *fp;
    for(int i = 1 ; i < argc ; i++){
    fp = fopen(argv[i], "r");
    char singleLine[150];
    while(fgets(singleLine,150,fp) != NULL) printf("%s",singleLine);
    fclose(fp);
    }   
}