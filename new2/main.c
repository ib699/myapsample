#include <stdlib.h>
#include <math.h>

int main() {    // اینجا M
    float num1, num2;    // اینجا sin و cos   اعشاری
    char op;
    float result;       // اینجا float

   printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan): ");   // اینجا P
    scanf(" %c", &op);  // اینجا &

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");

    scanf("%f", &num2);   // اینجا ;

    // do the operation
    if(op == '+') {
        // the part that calculates the sum of two numbers
        result = num1 + num2;
    }
    else if(op == '-') {
        // the part that calculates the difference of two numbers
        result = num1 - num2;
    }
    else if(op == '*') {
        // the part that calculates the product of two numbers
        result = num1 * num2;
    }
    else if(op == '/') {
        // the part that calculates the division of two numbers
        // if denominator equals to zero exit the program
        if(num2 == 0) {
            printf("invalid input! divide by zero");
            return -1;
        }
        else {
            result = num1 / num2;
        }
    }
    else if(op == '%') {
        // the part that calculates the remainder of a number over another number
        if ((num1 - (int)num1 == 0) && (num2 - (int)num2) == 0) {
            result = (int)num1 % (int)num2;
        }
        else {
            printf("incorrect input");
            return 0;
        }
    }
    else if(op == 's') {
        // the part that calculates sine of an angle
        result = sin(num1 / num2);
    }
    else if(op == 'c') {
        //the part that calculates the cosine of an angle
        result = cos(num1 / num2);
    }
    else if(op == 't') {
        // the part that calculates the tangent of an angle
        result = tan(num1 / num2);
    }

    // print result
    if(op == 's') {
        printf("result : sin(%f/%f) = %f", num1, num2, result);       // اینجا %d برای دابل
    }
    else if(op == 'c') {
        printf("result : cos(%f/%f) = %f", num1, num2, result);        // اینجا %d برای دابل
    }
    else if(op == 't') {
        printf("result : tan(%f/%f) = %f", num1, num2, result);         // اینجا %d برای دابل
    }
    else if(op == '%') {
        printf("result : %.f %% %.f = %.f", num1, num2, result);      // اینجا lf برای دابل
    }
    else {
        printf("result : %f %c %f = %f", num1, op, num2, result);       // اینجا %d برای دابل
    }

    return 0;
}
