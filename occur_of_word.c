#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int word_count(char *string,char *word);


int main(){
    char str1[100];
    char count_word[100];
    printf("------------------------word count program-------------------------\n");
    printf("enter a string : ");
    scanf("%[^\n]",&str1); // %[^\n] spacifier take string until you press enter 
    printf("enter a word : ");
    fflush(stdin); // very important 
    scanf("%[^\n]",&count_word);
    fflush(stdin);
    int occur=word_count(str1,count_word);
    printf("number of occur= %d",occur);
    return 0 ;
}

/**
 * @brief : take a sentence from user and an word and count how many times this word repeated in the sentence.
 * @param: char *string
 * @param: char *word
 * @return: int number of occurance 
*/
int word_count(char *string,char *word){
    int slen=strlen(string);
    int wlen=strlen(word);
    int occur=0;
    int end=slen-wlen+1;
    int check=true;
    for (int i = 0; i <end ; i++){
        for (int j = 0; j< wlen; j++){
            if (string[i+j]!=word[j]){
                check=false;
                break;
            } 
        }
        if(check){
                occur++;
            }
        check=true;
    }
    return occur;
}