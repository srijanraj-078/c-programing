#include <stdio.h>

int main() {
    int i, j, num;

    for(i = 1; i <= 5; i++) {

        if(i % 2 == 0)
            num = 2;   // even row starts with 2
        else
            num = 1;   // odd row starts with 1

        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;
        }

        printf("\n");
    }

    return 0;
}
