#include "QuanLyCafe.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

QuanLyCafe::QuanLyCafe()
{
}

void QuanLyCafe::themSanPham(const SanPham &sp)
{
    dsSanPham.push_back(sp);
}

void QuanLyCafe::suaSanPham(const string &ma, const SanPham &sp)
{
    for (int i = 0; i < dsSanPham.size(); i++)
    {
        if (dsSanPham[i].getMaSP() == ma)
        {
            dsSanPham[i] = sp;
            return;
        }
    }
}

void QuanLyCafe::xoaSanPham(const string &ma)
{
    for (int i = 0; i < dsSanPham.size(); i++)
    {
        if (dsSanPham[i].getMaSP() == ma)
        {
            dsSanPham.erase(dsSanPham.begin() + i);
            return;
        }
    }
}

SanPham* QuanLyCafe::timSanPham(const string &ma)
{
    for (int i = 0; i < dsSanPham.size(); i++)
    {
        if (dsSanPham[i].getMaSP() == ma)
        {
            return &dsSanPham[i];
        }
    }

    return nullptr;
}

void QuanLyCafe::hienThiSanPham()
{
    if (dsSanPham.empty())
    {
        cout << "Danh sach san pham rong!" << endl;
        return;
    }

    for (int i = 0; i < dsSanPham.size(); i++)
    {
        dsSanPham[i].xuat();
        cout << endl;
    }
}

void QuanLyCafe::themKhachHang(const KhachHang &kh)
{
    dsKhachHang.push_back(kh);
}

void QuanLyCafe::suaKhachHang(const string &ma, const KhachHang &kh)
{
    for (int i = 0; i < dsKhachHang.size(); i++)
    {
        if (dsKhachHang[i].getMaKH() == ma)
        {
            dsKhachHang[i] = kh;
            return;
        }
    }
}

void QuanLyCafe::xoaKhachHang(const string &ma)
{
    for (int i = 0; i < dsKhachHang.size(); i++)
    {
        if (dsKhachHang[i].getMaKH() == ma)
        {
            dsKhachHang.erase(dsKhachHang.begin() + i);
            return;
        }
    }
}

KhachHang* QuanLyCafe::timKhachHang(const string &ma)
{
    for (int i = 0; i < dsKhachHang.size(); i++)
    {
        if (dsKhachHang[i].getMaKH() == ma)
        {
            return &dsKhachHang[i];
        }
    }

    return nullptr;
}

void QuanLyCafe::hienThiKhachHang()
{
    if (dsKhachHang.empty())
    {
        cout << "Danh sach khach hang rong!" << endl;
        return;
    }

    for (int i = 0; i < dsKhachHang.size(); i++)
    {
        dsKhachHang[i].xuat();
        cout << endl;
    }
}
void QuanLyCafe::luuDuLieu()
{
    ofstream fileSP("products.txt");

    for (int i = 0; i < dsSanPham.size(); i++)
    {
        fileSP << dsSanPham[i].getMaSP() << "|";
        fileSP << dsSanPham[i].getTenSP() << "|";
        fileSP << dsSanPham[i].getGia() << endl;
    }

    fileSP.close();

    ofstream fileKH("customers.txt");

    for (int i = 0; i < dsKhachHang.size(); i++)
    {
        fileKH << dsKhachHang[i].getMaKH() << "|";
        fileKH << dsKhachHang[i].getTenKH() << "|";
        fileKH << dsKhachHang[i].getSoDienThoai() << "|";
        fileKH << dsKhachHang[i].getDiemTichLuy() << endl;
    }

    fileKH.close();
}

void QuanLyCafe::docDuLieu()
{
    dsSanPham.clear();
    ifstream fileSP("products.txt");

    string line;

    while (getline(fileSP, line))
    {
        stringstream ss(line);

        string ma;
        string ten;
        double gia;

        getline(ss, ma, '|');
        getline(ss, ten, '|');

        ss >> gia;

        SanPham sp(ma, ten, gia);

        dsSanPham.push_back(sp);
    }

    fileSP.close();

    dsKhachHang.clear();

    ifstream fileKH("customers.txt");

    while (getline(fileKH, line))
    {
        stringstream ss(line);

        string ma;
        string ten;
        string sdt;
        int diem;

        getline(ss, ma, '|');
        getline(ss, ten, '|');
        getline(ss, sdt, '|');

        ss >> diem;

        KhachHang kh(ma, ten, sdt, diem);

        dsKhachHang.push_back(kh);
    }

    fileKH.close();
}