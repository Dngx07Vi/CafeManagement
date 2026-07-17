#include "HoaDon.h"
#include <iostream>
#include <string>
using namespace std;

void HoaDon::themMon(string ten, double gia, int sl)
{
    dsMon.push_back(ChiTietHoaDon(ten, gia, sl));

    cout << "Da them mon thanh cong!\n";
}

void HoaDon::xoaMon(string ten)
{
    for (int i = 0; i < dsMon.size(); i++)
    {
        if (dsMon[i].getTenMon() == ten)
        {
            dsMon.erase(dsMon.begin() + i);

            cout << "Da xoa mon!\n";

            return;
        }
    }

    cout << "Khong tim thay mon.\n";
}

void HoaDon::suaSoLuong(string ten, int slMoi)
{
    for (int i = 0; i < dsMon.size(); i++)
    {
        if (dsMon[i].getTenMon() == ten)
        {
            dsMon[i].setSoLuong(slMoi);

            cout << "Cap nhat thanh cong!\n";

            return;
        }
    }

    cout << "Khong tim thay mon.\n";
}

double HoaDon::tinhTongTien() const
{
    double tong = 0;

    for (auto mon : dsMon)
    {
        tong += mon.thanhTien();
    }

    return tong;
}

void HoaDon::hienThiHoaDon() const
{
    cout << "\n========== HOA DON ==========\n";

    cout << left
         << setw(20) << "Ten mon"
         << setw(12) << "Don gia"
         << setw(10) << "SL"
         << setw(12) << "Thanh tien"
         << endl;

    for (auto mon : dsMon)
    {
        mon.hienThi();
    }

    cout << "-------------------------------\n";
    cout << "Tong tien: " << tinhTongTien() << " VND\n";
}