//列挙型
/*enum タグ名 {
    列挙子１,
    列挙子２,
    列挙子３
};
*/

#include <stdio.h>

enum _day {
    DAY_MONDAY,
    DAY_TUESDAY,
    DAY_WEDNESDAY,
    DAY_THURSDAY,
    DAY_FRIDAY,
    DAY_SATURDAY,
    DAY_SUNDAY
};

void printDayOfWeek(enum _day day) {
    switch(day) {
    case DAY_MONDAY:
        printf("月曜日です\n");
        break;
    case DAY_TUESDAY:
        printf("火曜日です\n");
        break;
    case DAY_WEDNESDAY:
        printf("水曜日です\n");
        break;
    case DAY_THURSDAY:
        printf("木曜日です\n");
        break;
    case DAY_FRIDAY:
        printf("金曜日です\n");
        break;
    case DAY_SATURDAY:
        printf("土曜日です\n");
        break;
    case DAY_SUNDAY:
        printf("日曜日です\n");
        break;
    default:
        printf("day error\n");
        break;
    }
}

int main(void) {
    enum _day day = scanf("%d", &day);

    printDayOfWeek(day);
    printf("%d\n", DAY_FRIDAY);

    return 0;
}