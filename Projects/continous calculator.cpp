#include<stdio.h>

int main()
{
    int a, b, c;
    char ch;

    do
    {
        printf("Enter 2 numbers: ");
        scanf("%d%d", &a, &b);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &ch);

        switch (ch)
        {
            case '+':
                c = a + b;
                printf("Result: %d\n", c);
                break;

            case '-':
                c = a - b;
                printf("Result: %d\n", c);
                break;

            case '*':
                c = a * b;
                printf("Result: %d\n", c);
                break;

            case '/':
                if (b != 0)
                {
                    c = a / b;
                    printf("Result: %d\n", c);
                }
                else
                {
                    printf("Error: Cannot divide by zero!\n");
                }
                break;

            case 'q':
                printf("Exiting...\n");
                break;

            default:
                printf("Enter valid operator!\n");
        }

    } while (ch != 'q');

    return 0;
}
