#include <iostream>
#include <Don.h>

float Don::TongTien1 = 0;
float Don::TongTien2 = 0;
float Don::TongKhoiLuong1 = 0;
float Don::TongKhoiLuong2 = 0;
using namespace std;

int main()
{

    Don p(1,2);
    p.TongTien();
    p.TongKhoiLuong();

    return 0;
}
