#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp = fopen("sensor.csv", "r");

    if (fp == NULL) {
        printf("ファイルを開けません");
        return 1;
    }

    char  location[32];
    char  max_location[32] = "";
    int   temp;
    float hum;
    int   max_temp = -999;

    while (fscanf(fp,"%31[^,],%d,%f\n",location,&temp,&hum)==3){
        if (temp > max_temp) {
            strcpy(max_location, location);
            max_temp = temp;
        }
    }

    fclose(fp);
    fp = NULL;

    printf("最高気温は %d°C（%s）\n", max_temp, max_location);
    return 0;
}
