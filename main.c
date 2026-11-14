#include <stdio.h>

/* 一个简单的示例：判断传入的整数是否为素数 */
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    printf("GitHub CI 自动编译运行成功！\n");
    for (int n = 2; n <= 11; n++) {
        if (is_prime(n)) {
            printf("%d 是素数\n", n);
        }
    }
    return 0;
}
