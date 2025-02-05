// Main C file for device drivers. This file contains the entry point of the program.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @file main.c
 * @brief This file contains the main function and a helper function to print messages.
 */

/**
 * @brief Prints a message to the standard output.
 *
 * This function takes a string message as input and prints it to the standard output
 * followed by a newline character.
 *
 * @param message The message to be printed.
 */
void print_message(const char *message) 
{
    printf("%s\n", message);
}

int main()
{
    print_message("Hello World!");
    return 0;
}