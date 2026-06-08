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

    /* TODO: fp が NULL かどうかチェックして、NULL なら
     *       エラーメッセージを表示して return 1; する */

    /* TODO: fprintf で 名前,整数,小数 の形式で1行書く
     *       自分の名前・好きな数に変えること */
    
    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    fprintf(fp, "荒井里音,16,5.37\n");

    fclose(fp);
    fp = NULL;
    printf("書き込み完了\n");
    return 0;
}
