/*
 * ex_read.c — ★ 基本演習（全員）
 *
 * 目標: ex_write.c で作った mydata.csv を読み込んで表示する
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("mydata.csv", "r");

    if (fp == NULL) {
        printf("mydata.csv を開けませんでした\n");
        return 1;
    }

    char  name[32];
    int   num;
    float dec;

    if (fscanf(fp, "%31[^,],%d,%f", name, &num, &dec) != 3) {
        printf("読み込みに失敗しました\n");
        fclose(fp);
        fp = NULL;
        return 1;
    }

    printf("名前: %s\n", name);
    printf("整数: %d\n",  num);
    printf("小数: %.2f\n", dec);

    fclose(fp);
    fp = NULL;
    return 0;
}
