#include "main.h"

/**
 * main - Test function for positive_or_negative
 *
 * This function sets an integer 'i' to 0 and then calls the
 * 'positive_or_negative' function to test its behavior with the case of 0.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
    int i; // Declare an integer variable 'i'

    i = 0; // Initialize 'i' with the value 0

    // Call the 'positive_or_negative' function to test it with 'i'
    positive_or_negative(i);

    return (0); // Return 0 to indicate successful execution
}
