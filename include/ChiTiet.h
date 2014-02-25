#ifndef CHITIET_H
#define CHITIET_H
#include <iostream>

using namespace std;

class ChiTiet
{
    protected:
        string Ten;
        int Loai;
    public:
        ChiTiet();
        void setTen(string n_Ten);
        string getTen();
        void setLoai(int n_Loai);
        int getLoai();
        virtual void Nhap() {};
        virtual int TinhGia() {};
};

#endif // CHITIET_H
