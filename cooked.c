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
#include <stdio.h>
int main(){
    char c;
    printf("enter a character \n");
    scanf("%c", &c);
    if(c>='0' && c<='9'){
        printf("given character is digit");
    }
    else{
        printf("given character is not a digit");
    }
    return 0;
}