#include <stdio.h>

int main(void) {

    char str[100];
    int count = 0;
    printf("%c%c%c%c%c%c%c: ", -126, -94, -91, -92, 105, -30, -20);
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < 100; i++) {
    if (str[i] == -87) {
        count = count + 1;
        }

    if (str[i] == ';' || str[i] == '-' || (str[i] == '/' && str[i + 1] == '/')) {
        break;
        }
    }
    if (count == 0) {
        printf("%c%c%c%c%c %c%c%c %c%c%c%c%c%c%c%c: ", -112, -17, -92, -82, -86, -95, -91, -89, -93, -82, -85, -82, -31, -83, -88, -27);
        for (int step = 0; step < 100; step++) {
        if (str[step] != -128 && str[step] != -14 && str[step] != -13 && str[step] != -12 && str[step] != -11 && str[step] != -123 && str[step] != -120 && str[step] != -109 && str[step] != -98
        && str[step] != -97 && str[step] != -96 && str[step] != -91 && str[step] != -88 && str[step] != -82 && str[step] != -29 && str[step] != -17 && str[step] != -18 && str[step] != -114) {
        printf("%c", str[step]);
        }
        if (str[step] == ';' || str[step] == '-' || (str[step] == '/' && str[step + 1] == '/')) {
        if (str[step + 1] == '/') printf("/");
        break;
            }
        }
    }
    else printf("%c%c%c%c%c%c%c%c%c \"%c\" %c %c%c%c%c%c: %d", -118, 105, -85, -20, -86, 105, -31, -30, -20, -87, -29, -32, -17, -92, -86, -29, count);
    getchar();
    return 0;
}
