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

    // Test 1
    // DD MM YYYY
    // 01 01 2015 exp_date
    // 01 01 2015 same date (act date)
    if(getFine(exp_date, act_date) == 0)
      cout << "Test 1 pass" << endl;
    // 12 25 2014 before date (act date)
    if(getFine(exp_date, act_date) == 0)
      cout << "Test 2 pass" << endl;
    // 14 01 2015 same month
    if(getFine(exp_date, act_date) == 15*(14-1))
      cout << "Test 3 pass" << endl;
    // 01 02 2015 same year
    if(getFine(exp_date, act_date) == 500*(2-1))
      cout << "Test 4 pass" << endl;
    return 0;
}

int getFine(Date exp_date, Date act_date) {
  return 0;
}

