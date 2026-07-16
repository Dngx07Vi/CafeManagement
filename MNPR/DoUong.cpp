#include <iostream>
#include "DoUong.h"
using namespace std;

// Constructor mặc định
DoUong::DoUong() : SanPham()
{
    loai = "";
    kichCo = "";
}

// Constructor có tham số
DoUong::DoUong(string ma, string ten, double gia,
               string l, string kc)
    : SanPham(ma, ten, gia)
{
    loai = l;
    kichCo = kc;
}

// Destructor
DoUong::~DoUong()
{

}

// Getter
string DoUong::getLoai()
{
    return loai;
}

string DoUong::getKichCo()
{
    return kichCo;
}

// Setter
void DoUong::setLoai(string l)
{
    loai = l;
}

void DoUong::setKichCo(string kc)
{
    kichCo = kc;
}

// Hàm nhập
void DoUong::nhap()
{
    // Gọi hàm nhập của lớp cha
    SanPham::nhap();

    cout << "Nhap loai do uong: ";
    getline(cin, loai);

    cout << "Nhap kich co (S/M/L): ";
    getline(cin, kichCo);
}

// Hàm xuất
void DoUong::xuat()
{
    // Gọi hàm xuất của lớp cha
    SanPham::xuat();

    cout << "Loai: " << loai << endl;
    cout << "Kich co: " << kichCo << endl;
}