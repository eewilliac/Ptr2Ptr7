#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_lines();
void build_array();
void populate_list(char *names[]);

int main(){
    int line_count=count_lines();
    if(line_count<=0){
        printf("Problems finding file or nothing to do!!!");
        return 0;
    }
    char **names=malloc(sizeof(char*)*line_count);
    build_array(names);

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
    fclose(fp);
    return line_count;
}

void build_array(char *names[]){
    int numOfLines=count_lines();
    char temp[32];
    if(numOfLines<=0){
        return;
    }
    FILE *fp=fopen("./names.txt","r");
    for(int cursor=0;cursor<numOfLines;cursor++){
        fgets(temp,sizeof(temp),fp); //why is it sizeof(temp) vs strlen(temp)??????
        printf("%s\n",temp);
    }
    fclose(fp);
}

void populate_list(char *names[]){

}