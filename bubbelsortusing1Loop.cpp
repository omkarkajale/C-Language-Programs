#include <stdio.h>

int main() {
    int i, y;
    int a[20] = {8, 9, 3, 6, 10, 5, 4, 7, 2, 1, 28, 76, 32, 23, 45, 43, 12, 32, 88, 77};
    int number =20;

    for (i = 0; i < number - 1; i++) {
        if (a[i] > a[i + 1]) {
            y = a[i];
         
		    a[i] = a[i + 1];
            a[i + 1] = y;
            i = -1; 
        }
    }

    for (i = 0; i < number; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

