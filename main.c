#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int a[SIZE], x, y;

int hesapla(int x, int toplam);

int main(void) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 899 + 100;
        y = a[i];

        if (hesapla(y, 0)) {
            printf("a[%d]. sayi palindromdur - %d\n", i, y);
        } else {
            printf("a[%d]. sayi palindrom degil - %d\n", i, y);
        }
    }

    return 0;
}

int hesapla(int x, int toplam) {
    if (x == 0) {
        return (toplam == y);  // 1 döndürür
    }

    return hesapla(x / 10, toplam * 10 + x % 10);
}
