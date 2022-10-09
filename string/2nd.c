#include<stdio.h>
#include<string.h>
int main(){
    char name1[20]="hello", name2[10]="world";
    // strcpy(name1,name2);
    strcat(name1, name2);
    puts(name1);
}