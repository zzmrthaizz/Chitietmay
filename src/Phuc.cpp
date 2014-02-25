#include "Phuc.h"
#include "Don.h"

Phuc::Phuc()
{
    this->soluong = 0;
}

void Phuc::Nhap()
{
    cout <<"Nhap so luong Chi Tiet: ";
    cin >> this->soluong;

    this->setLoai(1);

    DsDon = new ChiTiet * [soluong];
    for (int i = 0; i< soluong; i++)
    {
        DsDon[i] = new ChiTiet();
        cout << "Loai chi tiet (Don=0) (Phuc=1): ";
        int n_Loai;
        cin >> n_Loai;
        this->DsDon[i]->setLoai(n_Loai);
        switch (this->DsDon[i]->getLoai())
        {
            case 0:
            this->DsDon[i] = new Don();
            this->DsDon[i]->Nhap();
            break;
            case 1:
            this->DsDon[i] = new Phuc();
            this->DsDon[i]->Nhap();
            break;
        }
    }
}

int Phuc::TinhGia()
{
    int sum = 0;
    for (int i = 0; i<soluong;i++)
    {
        sum = sum + this->DsDon[i]->TinhGia();
    }
    return sum;
}
