#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
        unsigned int mul, counter;
        mul = 0;                                                                                                                                                if (argc != 2) {                                                                    printf("Error! Please include two integers to get the multiplication.\n");
                exit (98);
        }

        for (counter = 1; argv[counter] != NULL; ++counter) {
                if ((*argv + counter) >= '0' && argv[counter] <= '9')
                {                                                                                   mul *= atoi(argv[counter]);
                }else{
                        printf("Error\n");
                        exit(98);                                                           }

        }                                                                                                                                                       printf("%d\n", mul);
exit (0);
}
