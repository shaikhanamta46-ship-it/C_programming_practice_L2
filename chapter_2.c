#include <stdio.h>

int main() {
    int i = 10;
    int j = i;
    int a = 3, b = 4, c = 5, d = 6;
    //%d is format specifier 
    //%d is for integer %f is for float, %c is for char
    printf("The value of i is %d, and The value of j is %d\n",i,j);
    printf("The value of a is %d, and The value of b is %d\n",a,b);
    printf("The value of c is %d, and The value of  is %d\n",c,d);
    return 0;
}

/* TYPE DECLARATION INSTRUCTIONS -->>int a; // Declare an integer variable 'a'
float b; // Declare a float variable 'b'
int i = 10; // Declare and initialize 'i' with 10
int j = i; // Declare 'j' and initialize with 'i'
int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
int j1 = a + j - i; // Valid: use previously defined variables
// Invalid: 'a' is used before declaration
// float b = a + 3;
// float a = 1.1;
// Valid: Assigning the same value to multiple variables
int a, b, c, d;
a = b = c = d = 30; // a, b, c, d all equal to 30
*/

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d The value of b is %d the sum is %d\n", a, b, c);
    // Modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n", a % b);
    //This does not work for exponensiation in c
    //int d = a^b;
    return 0;
}
#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    int d = 6.7;//demotion
    printf("The value of a/b is %f \n", c);
    printf("The value of d is %d", d);
    return 0;
}
#include <stdio.h>

int main() {
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value is %d\n",a*b/c +7);
    printf("The value is %d",3*b/2*c +7*a);
    // 3*b/2*c +7*a
    // 3*b/2*c = 21
    //18/2 * c +21
    //9 * c + 21
    //81 + 21
    //102
    return 0;
}
#include <stdio.h>

int main() {
    int n = 45;
    float m = 32.7;
    
    n = (int) m;// typecasting n to m convert  datartype
    printf("%d\n",n);
    return 0;
}