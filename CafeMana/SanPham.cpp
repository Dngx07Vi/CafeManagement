#include <iostream>
#include "SanPham.h"
using namespace std;

// Constructor mặc định
SanPham::SanPham()
{
    maSP = "";
    tenSP = "";
    gia = 0;
}

// Constructor có tham số
SanPham::SanPham(string ma, string ten, double g)
{
    maSP = ma;
    tenSP = ten;
    gia = g;
}

// Destructor
SanPham::~SanPham()
{

}

// Getter
string SanPham::getMaSP()
{
    return maSP;
}

string SanPham::getTenSP()
{
    return tenSP;
}

double SanPham::getGia()
{
    return gia;
}

// Setter
void SanPham::setMaSP(string ma)
{
    maSP = ma;
}

void SanPham::setTenSP(string ten)
{
    tenSP = ten;
}

void SanPham::setGia(double g)
{
    gia = g;
}

// Hàm nhập
void SanPham::nhap()
{
    cout << "Nhap ma san pham: ";
    getline(cin, maSP);

    cout << "Nhap ten san pham: ";
    getline(cin, tenSP);

    do{
        cout << "Nhap gia: ";
        cin >> gia;
        
    }while(gia <= 0);
}

// Hàm xuất
void SanPham::xuat()
{
    cout << "Ma SP: " << maSP << endl;
    cout << "Ten SP: " << tenSP << endl;
    cout << "Gia: " << gia << endl;
}