/*
 * task1_log.c — ★★ 発展1（追記ログ）
 *
 * 目標: 実行するたびに log.csv に1行追記するプログラムを作る
 *
 * 手順:
 *   1. このプログラムを完成させてコンパイルする
 *   2. 5回実行する
 *   3. log.csv を開いて、5行増えているか確認する
 *   4. task1_count.c で行数を数える
 *
 * ヒント: 追記には "a" モードを使う
 */

#include <stdio.h>

int main(void) {
    /* TODO: log.csv を "a"（追記）モードで開く */
    FILE *fp = fopen("drndot.csv", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "ファイルを開けませんでした\n");
        return 1;
    }
    

    /* TODO: NULLチェック */

    fprintf(fp, "体育館,20, 50,0\n");
    /* TODO: 「教室,25,60.5」を1行書く */

    fclose(fp);
    fp = NULL;
    /* TODO: fclose する */

    printf("追記しました\n");
    return 0;
}
