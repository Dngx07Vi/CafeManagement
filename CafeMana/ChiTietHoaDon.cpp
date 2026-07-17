#include "ChiTietHoaDon.h"
#include <iostream>
#include <string>
using namespace std;

ChiTietHoaDon::ChiTietHoaDon()
{
    tenMon = "";
    donGia = 0;
    soLuong = 0;
}

ChiTietHoaDon::ChiTietHoaDon(string ten, double gia, int sl)
{
    tenMon = ten;
    donGia = gia;
    soLuong = sl;
}

double ChiTietHoaDon::thanhTien() const
{
    return donGia * soLuong;
}

string ChiTietHoaDon::getTenMon() const
{
    return tenMon;
}

double ChiTietHoaDon::getDonGia() const
{
    return donGia;
}

int ChiTietHoaDon::getSoLuong() const
{
    return soLuong;
}

void ChiTietHoaDon::setSoLuong(int sl)
{
    soLuong = sl;
}

void ChiTietHoaDon::hienThi() const
{
    cout << left
         << setw(20) << tenMon
         << setw(12) << donGia
         << setw(10) << soLuong
         << setw(12) << thanhTien()
         << endl;
}