//******//max repetation of number//******//

#include<stdio.h>
#include<string.h>
int main(){
    char str[]="abcbjfbebf";
    int freq[256]={0};
    int max=0;
    char result;
    int ln=strlen(str);
    for (int i = 0; i < ln; i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < ln; i++)
    {
        if (max<freq[str[i]])
        {
           max=freq[str[i]];
           result=str[i];
        }
    }
    printf("%c -> %d",result , max);
}