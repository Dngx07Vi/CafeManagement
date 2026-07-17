#ifndef DOUONG_H
#define DOUONG_H
#include <iostream>
#include "SanPham.h"

class DoUong : public SanPham {
    private:
        string loai;
        string kichCo;

    public:
        // Constructor mặc định
        DoUong();

        // Constructor có tham số
        DoUong(string ma, string ten, double gia, string loai, string kichCo);

        // Destructor
        ~DoUong();

        // Getter
        string getLoai();
        string getKichCo();

        // Setter
        void setLoai(string l);
        void setKichCo(string kc);

        // Hàm nhập
        void nhap();

        // Hàm xuất
        void xuat() override;
};

#endif