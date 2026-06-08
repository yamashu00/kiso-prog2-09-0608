#include <stdio.h>

int main(void) {
    int count = 0;

    FILE *fp = fopen("count.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &count);
        fclose(fp);
        fp = NULL;
    }

    count++;
    printf("センサーの計測回数: %d 回目\n", count);

    fp = fopen("count.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "%d\n", count);
        fclose(fp);
        fp = NULL;
    }

    return 0;
}
