/*
 * task2_max.c — ★★★ 発展2（最高気温を探す）
 *
 * 目標: sensor.csv を読んで、気温が一番高い場所と気温を表示する
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "r");

    if (fp == NULL) {
        printf("sensor.csv を開けませんでした\n");
        return 1;
    }

    char  location[32];
    char  max_location[32] = "";
    int   temp;
    float hum;
    int   max_temp = -999;

    while (fscanf(fp, "%31[^,],%d,%f\n", location, &temp, &hum) == 3) {
        if (temp > max_temp) {
            max_temp = temp;
            strcpy(max_location, location);
        }
    }

    fclose(fp);
    fp = NULL;

    printf("最高気温は %d°C（%s）\n", max_temp, max_location);
    return 0;
}
