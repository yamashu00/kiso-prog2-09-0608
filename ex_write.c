/*
 * ex_write.c — ★ 基本演習（全員）
 *
 * 目標: 自分の名前・好きな整数・好きな小数を mydata.csv に書き込む
 *
 * できあがる mydata.csv の例:
 *   山本周,42,3.14
 */

 /*#include <stdio.h>

 int main(void) {
     FILE *fp = fopen("mydata.csv", "w");
 
     if (fp == NULL) {
         printf("ファイルを開けませんでした。\n");
         return 1;
     }
 
     fprintf(fp, "%s,%d,%.1f\n", "石川莉子", 16, 42.6);
 
     fclose(fp);
 
     printf("書き込み完了\n");
     return 0;
 }*/

 #include <stdio.h>

int main(void) {
    FILE *fp = fopen("mydata.csv", "r");

    if (fp == NULL) {
        printf("ファイルを開けませんでした。\n");
        return 1;
    }

    char  name[32];
    int   num;
    float dec;

    if (fscanf(fp, "%31[^,],%d,%f", name, &num, &dec) != 3) {
        printf("読み込みエラーです。mydata.csv の中身を確認してください。\n");
        fclose(fp);
        return 1;
    }

    printf("名前: %s\n", name);
    printf("整数: %d\n", num);
    printf("小数: %.2f\n", dec);

    fclose(fp);
    return 0;
}
