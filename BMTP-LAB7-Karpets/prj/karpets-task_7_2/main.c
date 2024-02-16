#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sum = 0;
    int arr[14];
    for (int i = 0; i < 14; i++) {
    printf("%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %d %c%c%c%c%c%c%c%c %c%c%c%c%c%c: ", -126, -94, -91, -92, 105, -30, -20, -89, -83, -96, -25, -91, -83, -83, -17, i + 1, -91,
           -85, -91, -84, -91, -83, -30, -29, -84, -96, -31, -88, -94, -29);
    scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 14; i++) {
    if (0 < arr[i]) {
    sum = sum + arr[i];
        }
    }
    printf("%c%c%c%c %c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c: %d\n", -111, -29, -84, -96, -87, -82, -93, -82, -92, -82, -92, -96, -30, -83, 105, -27, -91, -85, -91, -84, -91, -83, -30, 105, -94, sum);
    getchar();
    getchar();
    return 0;
}
