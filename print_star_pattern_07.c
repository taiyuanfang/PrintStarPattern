/*

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, j, rows = 5;

    if (argc > 1)
        rows = atoi(argv[1]);

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows; ++j) {
            if (j < i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}