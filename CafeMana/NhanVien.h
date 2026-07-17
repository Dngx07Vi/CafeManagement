#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>

using namespace std;

class NhanVien {
    private:
        string maNV;
        string tenNV;
        string chucVu;
        string soDienThoai;

    public:
        // Constructor mặc định
        NhanVien();

        // Constructor có tham số
        NhanVien(string ma, string ten, string cv, string sdt);

        // Destructor
        ~NhanVien();

        // Getter
        string getMaNV();
        string getTenNV();
        string getChucVu();
        string getSoDienThoai();

        // Setter
        void setMaNV(string ma);
        void setTenNV(string ten);
        void setChucVu(string cv);
        void setSoDienThoai(string sdt);

        // Nhập thông tin
        void nhap();

        // Xuất thông tin
        void xuat();
};

#endif