#include "Don.h"
#include <iostream>

using namespace std;

//Ham Dung
Don::Don(int n_sochitietdon, int n_sochitietphuc)
{   for (int i =0; i<n_sochitietdon; i++)
    {
    cin >> MaSo;
    cin >> Gia;
    cin >> KhoiLuong;
    TongTien1 = TongTien1+Gia;
    TongKhoiLuong1 =TongKhoiLuong1+KhoiLuong;
    cout << "Tong tien don: " << TongTien1 <<endl;
    cout <<"Tong khoi luong don: "<< TongKhoiLuong1<<endl;
    }
    for (int i =0; i<n_sochitietphuc; i++)
    {
    cin >> MaSo;
    cin >> Gia;
    cin >> KhoiLuong;
    TongTien2 = TongTien2+Gia;
    TongKhoiLuong2 = TongKhoiLuong2 + KhoiLuong;
    }
    TongTien2 =TongTien2+TongTien2/10;
    TongKhoiLuong2 = TongKhoiLuong2+TongKhoiLuong2/10;
    cout <<"Tong tien phuc: " << TongTien2 << endl;
    cout <<"Tong khoi luong phuc: "<< TongKhoiLuong2<<endl;
}

Don::Don(string n_MaSo, float n_Gia, float n_KhoiLuong)
{
    this->MaSo = n_MaSo;
    this->Gia = n_Gia;
    this->KhoiLuong = n_KhoiLuong;
}
Don::Don(const Don &p)
{
    this->MaSo = p.MaSo;
    this->Gia =p.Gia;
    this->KhoiLuong = p.KhoiLuong;
}
//Get,Set MaSo
string Don::getMaSo()
{
    return this->MaSo;
}
void Don::setMaSo(string n_MaSo)
{
    this->MaSo = n_MaSo;
}
//Get,Set Gia
float Don::getGia()
{
    return this->Gia;
}
void Don::setGia(float n_Gia)
{
    this->Gia = n_Gia;
}
//Get,Set KhoiLuong
float Don::getKhoiLuong()
{
    return this->KhoiLuong;
}
void Don::setKhoiLuong(float n_KhoiLuong)
{
    this->KhoiLuong = n_KhoiLuong;
}
void Don::TongTien()
{
    float TongTien = TongTien1+TongTien2;
    cout <<"Tong tien lam may: "<<TongTien<<endl;
}
void Don::TongKhoiLuong()
{
    float TongKhoiLuong = TongKhoiLuong1+TongKhoiLuong2;
    cout << "Tong khoi luong may: "<< TongKhoiLuong<< endl;
}
