#ifndef KYHIEU_H
#define KYHIEU_H

#include <iostream>
using namespace std;

class KyHieu {
protected:
    float TruongDo;

public:
    virtual void Nhap();
    virtual bool Ktra_DauLangDen();
    virtual int LayCaoDo();
};

#endif // KYHIEU_H
