// #pragma warning(disable: 4996)

#include <cstdio> // c library <stdio.h>

int main(void) {
    freopen("output.txt", "w", stdout); // file redirection
    int i;
    scanf("%d", &i); // multiple lines scanf() buffer clear -> fflush(stdin) or while(getchar() != '\n')
    printf("From sea to shining c : %d\n", i);
    return 0;
}