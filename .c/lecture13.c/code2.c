// #include <stdio.h>

// int main() {
//     int arr[5]={1,2,3,5,1};
//     int check=1;
//     for(int i=0 ; i<5/2 ;i++){
//         if(arr[i]!=arr[5-1-i]){
//             check=0;
//             break;
//         }
//     }
//     if(check){
//         printf("yes its a ");
//     }
//     else{
//         printf("no its not palindrome ");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int arr[5]={10,20,30,40,50};
//     int f=arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i]=arr[i+1];
//         printf("%d\n" , arr[i]);
//     }
//     arr[4]=f;
// }


#include<stdio.h>
int main(){
int max=arr[0];
for (int i=0 ; i<5 ; i++){

 if (arr[i]>max)
 {max=arr[i];
}
}
printf("%d" , max);
}