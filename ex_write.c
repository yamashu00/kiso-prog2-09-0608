/*
 * ex_write.c — ★ 基本演習（全員）
 *
 * 目標: 自分の名前・好きな整数・好きな小数を mydata.csv に書き込む
 *
 * できあがる mydata.csv の例:
 *   山本周,42,3.14
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("mydata.csv", "w");

    /* ファイルを開けなかった場合の処理 */
    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    /* 名前,整数,小数 の形式で書き込む */
    fprintf(fp, "杉本直継,42,3.14\n");

    fclose(fp);
    fp = NULL;

    printf("書き込み完了\n");
    return 0;
}
