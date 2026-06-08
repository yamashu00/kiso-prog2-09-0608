// step1_append.c — "a" モードで追記する
// step1_write.c の "w" を "a" に変えただけ
//
// 【手順】
//   1. コンパイル: gcc step1_append.c -o step1_append
//   2. 実行:       ./step1_append
//   3. sensor.csv を確認 → 何行増えた？
//   4. もう一度実行 → また1行増えているか確認
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "a");   // "w" → "a"

    fprintf(fp, "校長室,20,50.0\n");

    fclose(fp);
    printf("追記しました\n");
    return 0;
}
