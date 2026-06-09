#include <stdio.h>

int main() {
    char str[1000001];
    scanf("%s", str);

    int flag = 0;

    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        flag = (ch >= '0' && ch <= '9')? flag | (1 << (ch - '0')) : flag;
    }

    printf((flag == (1 << 10) - 1)? "Yes" : "No");

    return 0;
}
