// #include<stdio.h>
// int factorial(int x){
// int fact = 1;
// for (int i =2 ; i<=x ; i++){
// fact=fact*i;
// }
// return fact;
// }
// int combination(int i , int j){
//   int icj =  factorial (i)/ (factorial(j)*factorial(i-j));
// return icj;
// }

// int main(){
//   int n ;
//   printf("enter n:");
//   scanf("%d" , &n);
//    for(int i=0 ; i<=n ; i++)
//   {
//     for ( int j =0 ; j<=i; j++)
//     {
//        int icj = combination(i , j);
//   printf("%d" , icj);
//    }
//     printf("\n");
//      }
// }                              

             //**************//pascal triangle//***************/



#include<stdio.h>
int factorial(int x){
int fact = 1;
for (int i =2 ; i<=x ; i++){
fact=fact*i;
}
return fact;
}
int combination(int i , int j){
  int icj =  factorial (i)/ (factorial(j)*factorial(i-j));
return icj;
}

int main(){
  int n ;
  printf("enter n:");
  scanf("%d" , &n);

   for(int i=0 ; i<=n ; i++)
  {
     for(int k=0 ; k<=i ; k++) 
     {
        printf(" ");
     }
    for ( int j =0 ; j<=i; j++)
    {
       int icj = combination(i , j);
  printf("%d " , icj);
   }
    printf("\n");
     }
  }    


//   ************ROCKET OF PASCAL**************  //

//  #include<stdio.h>
// int factorial(int x){
// int fact = 1;
// for (int i =2 ; i<=x ; i++){
// fact=fact*i;
// }
// return fact;
// }
// int combination(int i , int j){
//   int icj =  factorial (i)/ (factorial(j)*factorial(i-j));
// return icj;
// }

// int main(){
//   int n ;
//   printf("enter n:");
//   scanf("%d" , &n);

   

//    for(int i=0 ; i<=n ; i++)
//   {
    
//     for ( int j =0 ; j<=i; j++)
//     {
//        int icj = combination(i , j);
//   printf("%d" , icj);
  
       
//    }
//    for(int l=10; l>=10 ; l--){
//      printf("_") ;
//      printf("\n");

     
//     }

  

//     printf("\n");
//      }
//   }    


