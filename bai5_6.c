#include<stdio.h>
#include<string.h>
int main(){
    char S[100];
    fgets(S, sizeof(S), stdin);
    for(int i = 0; i < strlen(S); i++){
        if(S[i] >= 'a' && S[i] <= 'z'){
            S[i]= S[i] - 32;
        }
    }
    for(int i = 0; i < strlen(S); i++){
        if(S[i] == ' ' && S[i+1] == ' '){
            for(int j=i; j < strlen(S); j++){
                S[j] = S[j+1];
            }
            i--;
        }
    }
    if(S[0] == ' '){
        for(int i = 0; i < strlen(S); i++){
            S[i] = S[i+1];
        }
    }
    if(S[strlen(S) - 2] == ' '){
        for(int i = 0; i < (strlen(S) - 2); i++){
            printf("%c", S[i]);
        }
        printf(":%ld", strlen(S) - 2);
    }
    else{
        int j = 0;
        while(S[j] != '\n'){
            printf("%c", S[j]);
            j++;
        }
        printf(":%ld", strlen(S) - 1);
    }
    return 0;
}