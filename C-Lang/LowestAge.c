#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70, 13};
    int length = sizeof(ages) / sizeof(ages[0]);
    int i;
    int minAge = ages[0];

    for (i = 1; i < length; i++) {
        if (minAge > ages[i]) {
            minAge = ages[i];
        }
    }

    printf("The Lowest age is %d.", minAge);
    return 0;
}