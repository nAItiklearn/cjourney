//1st sept
// #include  <stdio.h> // pre processor directive

// int main(){
//     int a=72;
//     char star='*';
//     float pi = 3.14;  //theres  no string or boolean data type in c
//     printf("The value of a is %d\n",a);  // \n is used to print in new line
//     printf("The value of star is %c\n",star);
//     printf("The value of pi is %f\n",pi);
//     return 0 ;
// } 
//%d is used to print integer values, %c is used to print character values, %f is used to print float values-FORMAT SPECIFIERS

//2nd sept

// #include <stdio.h>

// int main(){
//     int a, b, c;
//     printf("enter 2 numbers \t");
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("sum of a & b is %d" , a+b);

//     return 0;

// }

// #include <stdio.h>
// int main(){
//     float r ;
//     printf("enter radius of circle \n");
//     scanf("%f", &r);
//     printf("area of circle is %f", 3.14*r*r);
//     return 0;
    
// }
// #include <stdio.h>
// int main(){
//     int a=1.9999;
//     printf("the value of a is %d",a);
//     return 0;  
// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     a=5;
//     b=2;
    // if(a==b){
    //     printf("a is equal to b");
        
    // }
    // else if(a>b){
    //     printf("a is greater than b");
    // }
    // else{
    //     printf("a is less than b");
    // }
    // printf("%s \n", 4==2 ? "true" : "false");
//     return 0;
// }

//check if given character is digit or not
// #include <stdio.h>
// int main(){
//     char c;
//     printf("enter a character \n");
//     scanf("%c", &c);
//     if(c>='0' && c<='9'){
//         printf("given character is digit");
//     }
//     else{
//         printf("given character is not a digit");
//     }
//     return 0;
// }

// #3rd sept

// #include <stdio.h>
// int main()
// {
//     int x=0 ;
//     printf("enter a number \n");
//     scanf("%d", &x);
//     printf("%s", x%2==0? "even " : "odd" );
//     return 0;

// }
// int main(){
//     //true -1; false-0;
//     int isSUNday=0;
//     int isRainy=0;
//     int isMONDAY=1;
//     if(isSUNday&& isRainy){
//         printf( "go dance in rain");
//     }
//     else if (isSUNday && !isRainy )
//     {
//         printf( "play valo at home");
//     }
//     else if (isMONDAY && isRainy){
//         printf( "mom its raining no school today");
//     }
//     else if(isMONDAY && !isRainy)
//     {
//         printf("dont go anyway" );

//     }
//     return 0;

// }

// #include <stdio.h>
// int main(){
//     int x , y;
//     printf("enter a and y:");
//     scanf("%d %d", &x, &y);
//     if(x>y){
//         printf("y is smallest");

//     }
//     else{
//         printf("x is smaller than y");
//     }
//     return 0;
// }

// 4th sept 
// #include <stdio.h>
// int main(){
//     int age;
//     printf("enter your age\n");
//     scanf("%d", &age);
//     printf("you are %d years old \n", age);
//     printf("%s", age>18? "you can vote" : "go study kiddo");

//     return 0;
// }
// #include  <stdio.h>
// int main(){
//     int x;
//     printf("enter no to check \n");
//     scanf("%d", &x);
//     if(x>0){
//     printf("positive");
//     }
//     else if(x<0){
//     printf("negative");
//     }
//     else
//     {
//     printf(" number is 0 like u");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
  int correctPin= 1234; int x;
  printf("enter pin to enter \n");
  scanf("%d", &x);
  printf("%s \n",x==correctPin ? "Access granted" :"access denied" );
  return 0;
}