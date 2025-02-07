// Main C file for device drivers. This file contains the entry point of the program.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

/**
 * @file main.c
 * @brief Entry point for the device driver application.
 *
 * This file contains the main function which serves as the entry point
 * for the device driver application. It prints a "Hello World!" message
 * to the console.
 *
 * @return Returns 0 upon successful execution.
 */
int main()
{
    print_message("Hello World!");
    print_message("feature2");
    return 0;
}
