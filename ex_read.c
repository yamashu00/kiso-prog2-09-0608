#include <stdio.h>

int main(void) {
    FILE *fp = fopen("mydata.csv", "r");

    if (fp == NULL){
        printf("ファイルが読み込めませんでした");
        return 1;
    }

    char  name[32];
    int   num;
    float dec;

    fscanf(fp,"%31[^,],%d,%f\n",name,&num,&dec);

    printf("名前: %s\n", name);
    printf("整数: %d\n",  num);
    printf("小数: %.2f\n", dec);

    fclose(fp);
    fp = NULL;
    return 0;
}
