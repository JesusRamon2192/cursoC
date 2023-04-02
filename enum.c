#include <stdio.h> 

enum weekDays {Monday, Tuesday, Wendnesday, Thursday, Friday, Saturday, Sunday};

int main() {
    enum weekDays today;
    today = Wendnesday;
    printf("Day %d\n", today + 1);
    return 0;
}