#!/usr/bin/env python3
import sys

def multiply(num1, num2):
    """
    This function multiplies two positive numbers.
    """
    result = 0
    for i in range(num2):
        result += num1
    return result

if __name__ == '__main__':
    # Check the number of arguments
    if len(sys.argv) != 3:
        print("Error")
        sys.exit(98)

    # Get the two numbers
    try:
        num1 = int(sys.argv[1])
        num2 = int(sys.argv[2])
    except ValueError:
        print("Error")
        sys.exit(98)

    # Check that the numbers are positive
    if num1 < 0 or num2 < 0:
        print("Error")
        sys.exit(98)

    # Multiply the numbers
    result = multiply(num1, num2)

    # Print the result
    print(result)
