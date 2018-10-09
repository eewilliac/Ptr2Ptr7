#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_lines();

int main(){
    int line_count=count_lines();
    printf("linecount %d",line_count);
}

int count_lines(){
    FILE *fp=fopen("./names.txt","r");
    if(fp==NULL){
        return -1;
    }
    int line_count=0;
    char curr_char=fgetc(fp);
    while(curr_char!=EOF){
        if(curr_char=='\n'){
            line_count++;
        }
        curr_char=fgetc(fp);
    }
    return line_count;
}