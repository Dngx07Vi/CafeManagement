#ifndef SANPHAM_H
#define SANPHAM_H

#include <iostream>
#include <string>

using namespace std;

class SanPham {
    private:
        string maSP;      // Mã sản phẩm
        string tenSP;     // Tên sản phẩm
        double gia;       // Giá bán

    public:
        // Constructor mặc định
        SanPham();

        // Constructor có tham số
        SanPham(string ma, string ten, double g);

        // Destructor
        virtual ~SanPham(); //Để giải phóng bộ nhớ khi đối tượng bị hủy

        // Getter
        string getMaSP();
        string getTenSP();
        double getGia();

        // Setter
        void setMaSP(string ma);
        void setTenSP(string ten);
        void setGia(double g);

        // Nhập thông tin
        void nhap();

        // Xuất thông tin
        virtual void xuat();
};

#endif