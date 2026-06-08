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

    if (fp == NULL) {
        fprintf(stderr, "書き込み用ファイルを開けませんでした\n"); //stderr→「エラー用メッセージ」
        return 1;
    }

    /* TODO: fprintf で 名前,整数,小数 の形式で1行書く 自分の名前・好きな数に変えること */

    fprintf(fp, "%s, %d, %0.01f\n", "八幡咲良", 5, 1.25);
    //fprintf:指定したファイルやストリーム（標準出力・標準エラー出力など）に書式付きのテキストを書き込む機能
    //fp:どのファイルに書き込むかを指定するポインタ
    
    fclose(fp);
    fp = NULL;
    printf("書き込み完了\n");
    return 0;   
}