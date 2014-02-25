#ifndef PHUC_H
#define PHUC_H
#include "ChiTiet.h"
#include <iostream>

class Phuc: public ChiTiet
{
    private:
        int soluong;
    public:
        Phuc();
        ChiTiet**DsDon;
        void Nhap();
        int TinhGia();
};

#endif // PHUC_H
