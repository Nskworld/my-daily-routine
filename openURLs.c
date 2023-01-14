#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 今日の曜日を取得する
int getWeekDay() {
    struct tm *localtime(const time_t *timer);
    time_t timer;

    struct tm *t_st;
    time(&timer);
    t_st = localtime(&timer);

    return t_st->tm_wday;
}

// 曜日に合わせてURLを開く関数
void openUrl(wday) {
    switch (wday) {
        case 0:
            system("open https://www.sample1.com");
            break;
        case 1:
            system("open https://www.sample2.com");
            break;
        case 3:
            system("open https://www.sample3.com");
            break;
        case 4:
            system("open https://www.sample4.com");
            break;
        default:
            printf("No page for today.");
            break;
    }
}

int main(void){
    int wday = getWeekDay();

    openUrl(wday);
}
