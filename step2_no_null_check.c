// step2_no_null_check.c — NULLチェックなし（クラッシュする）
//
// 【手順】
//   1. コンパイル: gcc step2_no_null_check.c -o step2_no_null_check
//   2. 実行:       ./step2_no_null_check
//   3. 確認:       Segmentation fault と表示されるか？
//   4. step2_with_null_check.c と比べてみよう
#include <stdio.h>

int main(void) {
    // 存在しないフォルダを指定する → fopen が NULL を返す
    FILE *fp = fopen("/no_such_dir/sensor.csv", "w"); //日本語訳にするとsensor.csv を開いて、その情報を fp に入れてね
    //if (fp == NULL) {
    //printf("エラー\n");
    //return 1;
    //}
    //この緑の上4行を足すと自分で安全装置つけたから、クラッシュしなくなる。
    //これがないとfp が NULL のまま fprintf しようとしてクラッシュする。　※NULL=何もない、空っぽって意味 ※fprintf=書き出し
    //つまり存在しないファイルに書こうとしてクラッシュしたということ!!

    // NULLチェックをしない → fp が NULL のままここに来る → クラッシュ
    fprintf(fp, "教室,25,60.5\n");

    fclose(fp);
    return 0;
}

