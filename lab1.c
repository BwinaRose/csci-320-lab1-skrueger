#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100



char* readString(char* str){
    FILE* txt_msg = fopen(str,"r");
    char line[MAX_SIZE];
    fgets(line,99, txt_msg);

    char* ptr = (char*)malloc(MAX_SIZE*sizeof(char));
    memset(ptr, '\0',sizeof(char)*MAX_SIZE);
    strcpy(ptr,line);

    //printf("%s",line);
    fclose(txt_msg);
    return ptr;
}

char* mysteryExplode(){
    char str[100];
    printf("Enter name of file to read: ");
    scanf("%s",str);
    printf("\n\n\n\n");
    char* fd = readString(str);
    //printf("%s",fd);
    char newStr[MAX_SIZE];
    for(int i = 0; i < strlen(str)-1; i++){
        strncat(newStr,fd, i);
    }
    //make new str
    //for i = 1 str lenth < 1 i++:
    // strncat (newstr, &str , i

    //printf("You input: %s\n",str);
    //printf("%ld",strlen(fd));
    printf("%s\n",newStr);
    return "done";
}
