
#include <stdio.h>

int main() {
    int i;


    printf("Numbers divisible by 5 from 0 to 100 are:\n");
    for (i = 0; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
