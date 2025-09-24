// Given a current time, you want to find the nearest time for the next palindromic time display to appear.
// Input contains two integers separated by one space. 
// The output contains a digital clock display with two 2-digit numbers separated with ":".
// So how to find the time?
#include <iostream>
#include <iomanip>
int main() {
    int h,m,h1,m1;
    std::cin >> h >> m;
    if (0<=h && h<5) {
        if (m<10*h) {
            h1 = h;
            m1 = 10*h;
        }
        else {
            h1 = h+1;
            m1 = 10*(h+1);
        }
    }
    else if (h==5) {
        if (m<10*h) {
            h1 = h;
            m1 = 10*h;
        }
        else {
            h1 = 10;
            m1 = 1;
        }
    }
    else if (6<=h && h<10) {
        h1 = 10;
        m1 = 1;
    }
    else if (10<=h && h<15) {
        if (m<1+10*(h-10)) {
            h1 = h;
            m1 = 1+10*(h-10);
        }
        else {
            h1 = h+1;
            m1 = 1+10*(h-9);
        }
    }
    else if (h==15) {
        if (m<1+10*(h-10)) {
            h1 = h;
            m1 = 1+10*(h-10);
        }
        else {
            h1 = 20;
            m1 = 2;
        }
    } 
    else if (16<=h && h<20) {
        h1 = 20;
        m1 = 2;
    }
    else if (20<=h && h<23) {
        if (m<2+10*(h-20)) {
            h1 = h;
            m1 = 2+10*(h-20);
        }
        else {
            h1 = h+1;
            m1 = 2+10*(h-19);
        }
        }
    else if (h==23) {
        if (m<2+10*(h-20)) {
            h1 = h;
            m1 = 2+10*(h-20);
        }
        else{
            h1 = 0;
            m1 = 0;
        }
    }
    std::cout << std::setw(2) << std::setfill('0') << h1 << ":";
    std::cout << std::setw(2) << std::setfill('0') << m1 << std::endl;
    return 0;
}
    