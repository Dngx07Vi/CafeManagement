#ifndef CHITIETHOADON_H
#define CHITIETHOADON_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ChiTietHoaDon
{
private:
    string tenMon;
    double donGia;
    int soLuong;

public:
    ChiTietHoaDon();
    ChiTietHoaDon(string ten, double gia, int sl);

    double thanhTien() const;

    string getTenMon() const;
    double getDonGia() const;
    int getSoLuong() const;

    void setSoLuong(int sl);

    void hienThi() const;
};

#endif