#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    char str[80];

    while (true) {
        printf("u$h> ");
        scanf("%s", str);
        system(str);
    }
}
