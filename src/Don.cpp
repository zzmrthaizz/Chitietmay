#include "Don.h"

Don::Don()
{
    this->Gia = 0;
}

void Don::Nhap()
{
    cout << "Nhap ten Don: ";
    string n_Ten;
    cin >> n_Ten;
    cout << "Nhap gia Don: ";
    int n_Gia;
    cin >> n_Gia;
    this->Gia = n_Gia;
    this->setTen(n_Ten);
    this->setLoai(0);
}


int Don::TinhGia()
{
    return this->Gia;
}
