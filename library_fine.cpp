#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct date {
    int day;
    int month;
    int year;
} Date;

int main() {
    Date exp_date; // expected date
    Date act_date; // actual date
    cin << exp_date.day << exp_date.month << exp_date.year;
    cin << act_date.date << act_date.month << act_date.year;
    return 0;
}

