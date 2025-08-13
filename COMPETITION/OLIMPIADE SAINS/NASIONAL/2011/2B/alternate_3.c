#include <stdio.h>

int pas[14] = {1, 4, 10, 20, 35, 56, 84, 120, 165, 220, 286, 364, 455, 560};
int n;

int main() {
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%*d %*d");
    }
    
    if (n < 3) {
        printf("0");
    } else {
        printf("%d", pas[n - 3]);
    }

    return 0;
}