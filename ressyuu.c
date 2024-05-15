/**
 * Function: main
 * --------------
 * @brief The main function and entry point of the program.
 *
 * @param argc The number of arguments passed to the program.
 * @param argv The list of arguments passed to the program.
 * @return int 0: No errors; 1: Errors produced.
 *
 */
int main(int argc, char *argv[])
{

        // variable to store the final answer
        int factorial = 1;

        // WRITE YOUR CODE TO DO COMMAND LINE INPUT CHECKING HERE
if (argc != 2) {
                printf("Error: Invalid number of arguments passed.\n");
                printf("Usage: %s <integer>\n", argv[0]);
                return 1;
        }
        // Takes the command line input and converts it into int.
        num = atoi(argv[1]);

        // WRITE YOUR CODE TO DO THE FACTORIAL CALCULATIONS HERE
if (num < 0) {
                printf("Error: Invalid argument. Please enter a positive integer.\n");
                return 1;
        }int i;
     for (i = 1; i <= num; i++) {
                factorial *= i;
        }

        // Print the result.
        printf("The factorial of %d is %d\n", num, factorial);
 printf("%d\n", factorial);
        return 0;
}
       

