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

// Fine details:
// D M Y
// x y z actual
// a b c expected
// on or before expected: act_date <= exp_date return 0
// same month: z <= c and y == b return 15*(x-a)
// same year: z == c return 500*(y-b)
// else: return 10000

int main() {
    Date exp_date; // expected date
    Date act_date; // actual date
    cin << act_date.date << act_date.month << act_date.year;
    cin << exp_date.day << exp_date.month << exp_date.year;
    return 0;
}

