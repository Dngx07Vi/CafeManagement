#include <iostream>
using namespace std;
#include "SanPham.h"
#include "DoUong.h"
#include "NhanVien.h"

int main()
{
    SanPham sp;

    sp.nhap();

    cout << endl;

    sp.xuat();

    DoUong du;

    du.nhap();

    cout << endl;

    du.xuat();

    NhanVien nv;

    nv.nhap();

    cout << endl;

    nv.xuat();

    return 0;
}