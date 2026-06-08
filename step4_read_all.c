// step4_read_all.c — 全行読む
//
// 【手順】
//   1. 先に step3_with_fclose を実行して sensor.csv を作っておく
//   2. コンパイル: gcc step4_read_all.c -o step4_read_all
//   3. 実行:       ./step4_read_all
//   4. 確認:       3行全部表示されるか？
//   5. 考える:     while の条件「== 3」の 3 はなぜ？
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "r");
    if (fp == NULL) {
        fprintf(stderr, "ファイルを開けませんでした\n");
        return 1;
    }

    char  location[32];
    int   temperature;
    float humidity;

    while (fscanf(fp, "%31[^,],%d,%f\n", location, &temperature, &humidity) == 3) {
        printf("%s: %d°C / %.0f%%\n", location, temperature, humidity);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}

/*
fscanf() は 「何個のデータを正常に読み取れたか」 を返す

while の条件「== 3」の 3 はなぜ？
→「3つとも全部正しく読み取れたら繰り返し実行する」
→「3」は読み取ろうとしている変数の数 だよ！
*/