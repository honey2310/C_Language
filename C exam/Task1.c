#include<stdio.h>

void main(){
    
    char letter;
    printf("Enter your letter: ");
    scanf("%c",&letter);
    // printf("%c",letter);
    
    char vowels[10]={'a','e','i','o','u'};
    int i;
    
    for(i=0;i<5;i++){
      if(vowels[i]==letter){
          printf("Letter is a vowel");
          break;
      }else{
          printf("Letter is a consonat");
          break;
      }
    }
}