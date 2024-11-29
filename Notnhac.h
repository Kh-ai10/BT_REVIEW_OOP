#ifndef NOTNHAC_H
#define NOTNHAC_H
#include "KyHieu.h"
#include <iostream>
using namespace std;

class NotNhac : public KyHieu 
{ 
 private: 
    int CaoDo; 
 public: 
    void Nhap(); 
    int LayCaoDo(); 
}; 

#endif