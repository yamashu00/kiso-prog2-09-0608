#include <stdio.h>

int main(void) {
    FILE *fp = fopen("log.csv", "r");

    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    char  location[32];
    int   temp;
    float hum;
    int   lines = 0;

    while (fscanf(fp, "%31[^,],%d,%f\n", location, &temp, &hum) == 3) {
        lines++;
    }

    fclose(fp);
    fp = NULL;

    printf("合計 %d 行\n", lines);
    return 0;
}