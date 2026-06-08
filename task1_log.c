#include <stdio.h>

int main(void) {
    FILE *fp = fopen("log.csv", "a");

    if (fp == NULL) {
        printf("ファイルを開けませんでした\n");
        return 1;
    }

    fprintf(fp, "教室,25,60.5\n");

    fclose(fp);
    fp = NULL;

    printf("追記しました\n");
    return 0;
}