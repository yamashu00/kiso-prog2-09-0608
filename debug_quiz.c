#include <stdio.h>

int main(void) {
    int   temperature = 25;
    float humidity    = 60.5;
    char  location[]  = "教室";

    printf("場所: %s\n",   location);
    printf("気温: %d°C\n", temperature);
    printf("湿度: %.1f%%\n", humidity);

    return 0;
}
