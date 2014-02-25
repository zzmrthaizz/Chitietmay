#include "ChiTiet.h"

ChiTiet::ChiTiet()
{
    this->Ten = "";
    this->Loai = 0;
}

string ChiTiet::getTen()
{
    return this->Ten;
}
void ChiTiet::setTen(string n_Ten)
{
    this->Ten = n_Ten;
}


int ChiTiet::getLoai()
{
    return this->Loai;
}
void ChiTiet::setLoai(int n_Loai)
{
    this->Loai = n_Loai;
}



void Nhap()
{}
int TinhGia()
{}
