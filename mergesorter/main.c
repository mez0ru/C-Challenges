#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    // Build the arrays:
    double numbers[argc - 1];
    double sorted[argc - 1];

    // Get numbers from arguments:
    printf("You added %d number(s).\n", argc-1);
    for (size_t i = 1; i < argc; i++){
        sscanf(argv[i], "%lf", &numbers[i-1]);
        printf("Number %zu: %g\n",
                i,
                numbers[i-1]
              );
    }

    // Merge sort:
    

    return EXIT_SUCCESS;
}
