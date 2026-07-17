#include "KhachHang.h"
#include <iostream>
using namespace std;

// Constructor mặc định
KhachHang::KhachHang()
{
    maKH = "";
    tenKH = "";
    soDienThoai = "";
    diemTichLuy = 0;
}

// Constructor có tham số
KhachHang::KhachHang(string ma, string ten, string sdt, int diem)
{
    maKH = ma;
    tenKH = ten;
    soDienThoai = sdt;
    diemTichLuy = diem;
}

// Destructor
KhachHang::~KhachHang()
{

}

// Getter
string KhachHang::getMaKH()
{
    return maKH;
}

string KhachHang::getTenKH()
{
    return tenKH;
}

string KhachHang::getSoDienThoai()
{
    return soDienThoai;
}

int KhachHang::getDiemTichLuy()
{
    return diemTichLuy;
}

// Setter
void KhachHang::setMaKH(string ma)
{
    maKH = ma;
}

void KhachHang::setTenKH(string ten)
{
    tenKH = ten;
}

void KhachHang::setSoDienThoai(string sdt)
{
    soDienThoai = sdt;
}

void KhachHang::setDiemTichLuy(int diem)
{
    diemTichLuy = diem;
}

// Hàm nhập
void KhachHang::nhap()
{
    cout << "Nhap ma khach hang: ";
    getline(cin, maKH);

    cout << "Nhap ten khach hang: ";
    getline(cin, tenKH);

    cout << "Nhap so dien thoai: ";
    getline(cin, soDienThoai);

    do{
        cout << "Nhap diem tich luy: ";
        cin >> diemTichLuy;

    }while(diemTichLuy < 0);
}

// Hàm xuất
void KhachHang::xuat()
{
    cout << "Ma KH: " << maKH << endl;
    cout << "Ten KH: " << tenKH << endl;
    cout << "So dien thoai: " << soDienThoai << endl;
    cout << "Diem tich luy: " << diemTichLuy << endl;
}