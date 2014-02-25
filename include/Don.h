#ifndef DON_H
#define DON_H
#include "ChiTiet.h"



class Don: public ChiTiet
{
    private:
        int Gia;
    public:
        Don();
        void Nhap();
        int TinhGia();
};

#endif // DON_H
