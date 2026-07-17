#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <string>

using namespace std;

class KhachHang {
    private:
        string maKH;
        string tenKH;
        string soDienThoai;
        int diemTichLuy;

    public:
        // Constructor mặc định
        KhachHang();

        // Constructor có tham số
        KhachHang(string ma, string ten, string sdt, int diem);

        // Destructor
        ~KhachHang();

        // Getter
        string getMaKH();
        string getTenKH();
        string getSoDienThoai();
        int getDiemTichLuy();

        // Setter
        void setMaKH(string ma);
        void setTenKH(string ten);
        void setSoDienThoai(string sdt);
        void setDiemTichLuy(int diem);

        // Nhập thông tin
        void nhap();

        // Xuất thông tin
        void xuat();
};

#endif