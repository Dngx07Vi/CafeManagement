#include <iostream>
using namespace std;
#include "SanPham.h"
#include "DoUong.h"
#include "NhanVien.h"
#include "KhachHang.h"
#include "QuanLyCafe.h"
#include "HoaDon.h"
#include "ChiTietHoaDon.h"


int main()
{
    QuanLyCafe ql;

    int chon;

    do
    {
        cout << "===== MENU =====\n";
        cout << "1. Quan ly san pham\n";
        cout << "2. Quan ly khach hang\n";
        cout << "3. Quan ly nhan vien\n";
        cout << "4. Hoa don\n";
        cout << "5. Thong ke\n";
        cout << "0. Thoat\n";

        cin >> chon;

        switch(chon)
        {
            case 1:

                break;


            case 2:
                // gọi hàm quản lý khách hàng
                break;

            case 3:
                // gọi hàm quản lý nhân viên
                break;

            case 4:
                // gọi hàm hóa đơn
                break;

            case 5:
                // gọi thống kê
                break;
        }

    }while(chon!=0);

    return 0;
}