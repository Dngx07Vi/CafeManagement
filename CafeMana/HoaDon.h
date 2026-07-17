#ifndef HOADON_H
#define HOADON_H

#include <iostream>
#include <vector>
#include "ChiTietHoaDon.h"

using namespace std;

class HoaDon
{
private:
    vector<ChiTietHoaDon> dsMon;

public:
    void themMon(string ten, double gia, int sl);

    void xoaMon(string ten);

    void suaSoLuong(string ten, int slMoi);

    double tinhTongTien() const;

    void hienThiHoaDon() const;
};

#endif