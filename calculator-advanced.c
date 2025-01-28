#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to calculate GCD
int gcd(int a, int b)
{
    int r;
    // Euclidean algorithm
    while (b > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void)
{
    int result;
    int option;

    // Display menu
    printf("SELECT\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Greatest common divisor\nSelect: ");
    scanf("%i", &option);
    getchar(); // Clear newline character left by scanf

    if (option >= 1 && option <= 4)
    {
        char str_nums[100];
        int nums[10];
        int count = 0;

        printf("Input multiple numbers separated by spaces: \n");
        fgets(str_nums, sizeof(str_nums), stdin);

        // Parse input into integers
        char *token = strtok(str_nums, " ");
        while (token != NULL && count < 10)
        {
            nums[count++] = atoi(token);
            token = strtok(NULL, " ");
        }

        // Initialize result with the first number
        result = nums[0];

        // Perform the selected operation
        for (int i = 1; i < count; i++)
        {
            if (option == 1)
            {
                result += nums[i];
            }
            else if (option == 2)
            {
                result -= nums[i];
            }
            else if (option == 3)
            {
                result *= nums[i];
            }
            else if (option == 4)
            {
                if (nums[i] == 0)
                {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                result /= nums[i];
            }
        }
    }
    else if (option == 5)
    {
        // Handle GCD operation
        int num1, num2;

        printf("First number: ");
        scanf("%i", &num1);
        printf("Second number: ");
        scanf("%i", &num2);

        result = gcd(num1, num2);
    }
    else
    {
        printf("Invalid option selected.\n");
        return 1;
    }

    // Output the result
    printf("Result: %i\n", result);

    return 0;
}

