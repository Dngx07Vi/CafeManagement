#ifndef QUANLYCAFE_H
#define QUANLYCAFE_H

#include <vector> 
#include <string>
#include "SanPham.h"
#include "KhachHang.h"
#include "HoaDon.h"

using namespace std;

class QuanLyCafe
{
private:
    vector<SanPham> dsSanPham;
    vector<KhachHang> dsKhachHang;

public:
    QuanLyCafe();

    void themSanPham(const SanPham &sp);
    void suaSanPham(const string &ma, const SanPham &sp);
    void xoaSanPham(const string &ma);
    SanPham* timSanPham(const string &ma);
    void hienThiSanPham();

    void themKhachHang(const KhachHang &kh);
    void suaKhachHang(const string &ma, const KhachHang &kh);
    void xoaKhachHang(const string &ma);
    KhachHang* timKhachHang(const string &ma);
    void hienThiKhachHang();
    vector<HoaDon> dsHoaDon;

    void luuDuLieu();
    void docDuLieu();
};

#endif