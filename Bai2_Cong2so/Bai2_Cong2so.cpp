// Bai2_Cong2so.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Chuong TRINH TINH TONG HAI SO\n";
    int so1, so2; // khai bao bien so1 va so2 kieu so nguyen 
    int tong;
    cout << "Nhap so 1: "; cin >> so1;
    cout << "Nhap so 2: "; cin >> so2;
    tong = so1 + so2;
    cout << "Tong hai so: " << so1 << " + " << so2 << " = " << tong << endl;
    return 0
}

