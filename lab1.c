#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 255



char* readString(char* str){
    FILE* txt_msg = fopen(str,"r");
    char line[MAX_SIZE];
    fgets(line,99, txt_msg);

    char* ptr = (char*)malloc(MAX_SIZE*sizeof(char));
    memset(ptr, '\0',sizeof(char)*MAX_SIZE);
    strcpy(ptr,line);

    //printf("%s",line);
    fclose(txt_msg);
    return "ok";
}

char* mysteryExplode(){
    char str[100];
    printf("Enter name of file to read: ");
    scanf("%s",str);
    char* fd = readString(str);
    //make new str
    //for i = 1 str lenth < 1 i++:
    // strncat (newstr, &str , i

    //printf("You input: %s\n",str);
    printf("%s\n",fd);
    return "working";
}
