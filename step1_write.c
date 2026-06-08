// step1_write.c — ファイルに書いてみる
// ※ NULLチェックがない（step2 で直す）
//
// 【手順】
//   1. コンパイル: gcc step1_write.c -o step1_write
//   2. 実行:       ./step1_write
//   3. 確認:       sensor.csv が作られているか？中身はどうなっているか？
//   4. もう一度実行して sensor.csv を確認 → 何行ある？（"w" モードに注目）
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "a");

    fprintf(fp, "教室,25,60.5\n");
    fprintf(fp, "廊下,22,55.0\n");
    fprintf(fp, "食堂,28,70.0\n");

    fclose(fp);
    printf("書き込みが終わりました\n");
    return 0;
}
