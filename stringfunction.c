#include<stdio.h>
#include<string.h>
int palindrome(char input[]);
void reverse(char input[]);
void copy(char input[], char output[]);
int stringlength(char input[]);
void substring(char input[]);
int main(){
    char str[10], output[10];
    int c, i, ch;
    printf("Enter a string \n");
    scanf("%s", str);
    do{
        printf(" 1. Copy \n 2. Palindrome \n 3. Substring \n 4. Reverse \n");
        scanf("%d", &ch);
        switch(ch){
            case 1: copy(str, output);
            break;
            case 2: c = palindrome(str);
            if(c==1){
                printf("The given string is a palindrome \n");
            }
            else{
                printf("The given string is not a palindrome");
            }
            break;
            case 3: substring(str);
            break;
            case 4: reverse(str);
            break;
        }
    }
    while(ch!=5);
    return 0;
}
int palindrome(char name[]){
    int i=0;
    int j=0;
    while(name[j]!=0){
        j++;
    }
    j--;
    while(i<j){
        if(name[i]!=name[j]){
            return 0;
        }
        i++;
        j--;
    }
    return(1);
}
void copy(char input[], char output[]){
    int i;
    for(i=0; input[i]!='\0'; i++){
        output[i] = input[i];
    }
    output[i] = '\0';
    printf("The copied string is \n");
    printf("%s",output);
}
int stringlength(char input[]){
    int i = 0;
    while(input[i]!=0){
        i++;
    }
    return i;
}
void substring(char input[]){
    int position, i, n;
    char output[10];
    printf("Enter the position of the substring \n");
    scanf("%d", &position);
    n = stringlength(input);
    if(position<n){
        for(i=0; i<n-position; i++){
            output[i] = input[position+i];
        }
        output[i] = '\0';
        printf("The substring is %s\n", output);
    }
    else{
        printf("The position entered is out of range \n");
    }
}
void reverse(char input[]){
    int i, n;
    char output[10];
    n = stringlength(input);
    for(i=0; i<n; i++){
        output[i] = input[n-1-i];
    }
    output[i] = '\0';
    printf("The reversed string is %s", output);
}