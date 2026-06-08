/*
 * task3_copy.c — ★★★★ 発展3（ファイルをコピーする）
 *
 * 目標: sensor.csv を読み込んで、内容がそのまま入った
 *       sensor_backup.csv を作る
 *
 * 実行後の確認:
 *   sensor_backup.csv が生成され、中身が sensor.csv と同じになっているか
 *
 * ポイント: FILE * を2つ同時に開く（in と out）
 *   - 片方が開けなかったとき、もう片方を fclose してから終了すること
 */

#include <stdio.h>

int main(void) {
    FILE *in = fopen("sensor.csv", "r");

    if (in == NULL) {
        printf("ファイルを開けませんでした。\n");
        return 1;
    }

    FILE *out = fopen("sensor_backup.csv", "w");

    if (out == NULL) {
        printf("ファイルを開けませんでした。\n");
        fclose(in);
        return 1;
    }

    char  location[32];
    int   temp;
    float hum;
    int   count = 0;

   while (fscanf(in, "%[^,],%d,%f\n", location, &temp, &hum) != EOF) {
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
