/*
 * ex_write.c — ★ 基本演習（全員）
 *
 * 目標: 自分の名前・好きな整数・好きな小数を mydata.csv に書き込む
 *
 * できあがる mydata.csv の例:
 *   山本周,42,3.14
 */

#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mydata.csv", "w");

    /* TODO: fp が NULL かどうかチェックして、NULL なら
     *       エラーメッセージを表示して return 1; する */
    if (fp == NULL)
    {
        printf("エラー: mydata.csv を開けませんでした\n");
        return 1;
    }

    fprintf(fp, "冨山そらの,7,2.71\n");

    fclose(fp);
    fp = NULL;
    printf("書き込み完了\n");
    return 0;
}
