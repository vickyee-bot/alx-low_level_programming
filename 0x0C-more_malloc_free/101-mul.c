#include <stdlib.h>
#include <stdio.h>
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 */
void _putchar(char c);

/**
 * error_exit - Print "Error" and exit with status 98
 */
void error_exit(void)
{
    char error_msg[] = "Error\n";
    int i;

    for (i = 0; error_msg[i] != '\0'; i++)
        _putchar(error_msg[i]);

    exit(98);
}

/**
 * is_digit - Check if a character is a digit (0-9)
 * @c: The character to check
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiply two numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, carry, product, sum;
    int *result;

    while (num1[len1] != '\0')
        len1++;
    while (num2[len2] != '\0')
        len2++;

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
        exit(98);

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            carry = product / 10;
            result[i + j + 1] = product % 10;
        }
        result[i + j + 1] = carry;
    }

    for (i = len1 + len2 - 1; i > 0; i--)
    {
        sum = result[i] + result[i - 1];
        result[i] = sum % 10;
        result[i - 1] = sum / 10;
    }

    for (i = (result[0] == 0 ? 1 : 0); i < len1 + len2; i++)
        _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int i, j;

    if (argc != 3)
        error_exit();

    for (i = 1; i <= 2; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!is_digit(argv[i][j]))
                error_exit();
        }
    }

    multiply(argv[1], argv[2]);

    return 0;
}

