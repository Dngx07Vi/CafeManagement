#include <iostream>
#include "NhanVien.h"
using namespace std;

// Constructor mặc định
NhanVien::NhanVien()
{
    maNV = "";
    tenNV = "";
    chucVu = "";
    soDienThoai = "";
}

// Constructor có tham số
NhanVien::NhanVien(string ma, string ten, string cv, string sdt)
{
    maNV = ma;
    tenNV = ten;
    chucVu = cv;
    soDienThoai = sdt;
}

// Destructor
NhanVien::~NhanVien()
{

}

// Getter
string NhanVien::getMaNV()
{
    return maNV;
}

string NhanVien::getTenNV()
{
    return tenNV;
}

string NhanVien::getChucVu()
{
    return chucVu;
}

string NhanVien::getSoDienThoai()
{
    return soDienThoai;
}

// Setter
void NhanVien::setMaNV(string ma)
{
    maNV = ma;
}

void NhanVien::setTenNV(string ten)
{
    tenNV = ten;
}

void NhanVien::setChucVu(string cv)
{
    chucVu = cv;
}

void NhanVien::setSoDienThoai(string sdt)
{
    soDienThoai = sdt;
}

// Hàm nhập
void NhanVien::nhap()
{
    cout << "Nhap ma nhan vien: ";
    getline(cin, maNV);

    cout << "Nhap ten nhan vien: ";
    getline(cin, tenNV);

    cout << "Nhap chuc vu: ";
    getline(cin, chucVu);

    cout << "Nhap so dien thoai: ";
    getline(cin, soDienThoai);
}

// Hàm xuất
void NhanVien::xuat()
{
    cout << "Ma NV: " << maNV << endl;
    cout << "Ten NV: " << tenNV << endl;
    cout << "Chuc vu: " << chucVu << endl;
    cout << "So dien thoai: " << soDienThoai << endl;
}