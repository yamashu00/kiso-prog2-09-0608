/*
 * task1_log.c — ★★ 発展1（追記ログ）
 *
 * 目標: 実行するたびに log.csv に1行追記するプログラムを作る
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("log.csv", "a");

    if (fp == NULL) {
        printf("log.csv を開けませんでした\n");
        return 1;
    }

    fprintf(fp, "教室,25,60.5\n");

    fclose(fp);
    fp = NULL;

    printf("追記しました\n");
    return 0;
}
