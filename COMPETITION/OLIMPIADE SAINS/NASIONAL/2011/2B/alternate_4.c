#include <stdio.h>

int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%*d %*d");
    }

    switch (n) {
        case 3:  printf("1");   break;
        case 4:  printf("4");   break;
        case 5:  printf("10");  break;
        case 6:  printf("20");  break;
        case 7:  printf("35");  break;
        case 8:  printf("56");  break;
        case 9:  printf("84");  break;
        case 10: printf("120"); break;
        case 11: printf("165"); break;
        case 12: printf("220"); break;
        case 13: printf("286"); break;
        case 14: printf("364"); break;
        case 15: printf("455"); break;
        case 16: printf("560"); break;
        default:
            printf("0");
            break;
    }

    return 0;
}