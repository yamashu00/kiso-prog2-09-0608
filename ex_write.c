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

    if (fp == NULL)
    {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    fprintf(fp, "Sosuke,191561942608236107294793378084303638130997321548169216,3.1415926535 8979323846 2643383279 5028841971 6939937510 5820974944 5923078164 0628620899 8628034825 3421170679\n");

    fclose(fp);
    fp = NULL;
    printf("書き込み完了\n");
    return 0;
}
