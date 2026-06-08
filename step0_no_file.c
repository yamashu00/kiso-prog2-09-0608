// step0_no_file.c
// 何度実行しても「1 回目」のまま — 変数はプログラムが終わると消えるから
#include <stdio.h>

int count = 0;

int main(void) {
    int count = 0;
    count++;
    printf("センサーの計測回数: %d 回目\n", count);
    return 0;
}
