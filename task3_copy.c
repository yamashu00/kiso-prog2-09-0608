/*
 * task3_copy.c — ★★★★ 発展3（ファイルをコピーする）
 *
 * 目標: sensor.csv を読み込んで、内容がそのまま入った
 *       sensor_backup.csv を作る
 */

#include <stdio.h>

int main(void) {
    FILE *in = fopen("sensor.csv", "r");

    if (in == NULL) {
        printf("sensor.csv を開けませんでした\n");
        return 1;
    }

    FILE *out = fopen("sensor_backup.csv", "w");

    if (out == NULL) {
        printf("sensor_backup.csv を開けませんでした\n");
        fclose(in);
        in = NULL;
        return 1;
    }

    char  location[32];
    int   temp;
    float hum;
    int   count = 0;

    while (fscanf(in, "%31[^,],%d,%f\n", location, &temp, &hum) == 3) {
        fprintf(out, "%s,%d,%.1f\n", location, temp, hum);
        count++;
    }

    fclose(in);
    in = NULL;
    fclose(out);
    out = NULL;

    printf("%d 行をコピーしました\n", count);
    return 0;
}
