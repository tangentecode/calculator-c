#include <stdio.h>


int addition(int a, int b)
{
        return a + b;
}

int subtract(int a, int b)
{
         return a - b;
}

int multiplicate(int a, int b)
{
        return a * b;
}

int divide(int a, int b)
{
        return a / b;
}

int main(void)
{
        // Get type of the operation
        int option;
        printf("SELECT\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nSelect: ");
        scanf("%i", &option);

        // Get numbers from the user
        int num1;
        int num2;

        printf("First number: ");
        scanf("%i", &num1);
        printf("Second number: ");
        scanf("%i", &num2);

        // Call function for the operation the user selected
        int result;

        if (option == 1)
        {
                result = addition(num1, num2);
        }
        else if (option == 2)
        {
                result = subtract(num1, num2);
        }
        else if (option == 3)
        {
                result = multiplicate(num1, num2);
        }
        else if (option == 4)
        {
                result = divide(num1, num2);
        }

        // Ouput the result
        printf("Result: %i\n", result);

        return 0;
}
