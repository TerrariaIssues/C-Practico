#include <stdio.h>
/*improved character counter*/
main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    ;
    printf("%1.1f\n", nc);
}