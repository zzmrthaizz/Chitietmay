#ifndef DON_H
#define DON_H
#include <iostream>

using namespace std;

class Don
{
    private:
        string MaSo;
        float Gia;
        float KhoiLuong;
        static float TongTien1;
        static float TongTien2;
        static float TongKhoiLuong1;
        static float TongKhoiLuong2;
    public:

        Don(int n_sochitietdon, int n_sochitietphuc);
        Don(string n_MaSo, float n_Gia, float n_KhoiLuong);
        Don(const Don &p);
        string getMaSo();
        void setMaSo(string n_MaSo);
        float getGia();
        void setGia(float n_Gia);
        float getKhoiLuong();
        void setKhoiLuong(float n_KhoiLuong);
        void TongTien();
        void TongKhoiLuong();

 };

#endif // DON_H
