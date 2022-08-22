#include<stdio.h>
int main(){
    char word='4';
    /*
        printf("Enter word");
        scanf("%c",&word)
     */
    if ((word>='a' && word>='z')||(word>='A' && word>='Z'))
    {
        printf("%c is a Alphabet", word);
    }else{
        printf("%c is a not Alphabet", word);
    }
    
    return 0;
}