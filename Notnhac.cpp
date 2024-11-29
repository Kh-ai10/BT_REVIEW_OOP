#include "KyHieu.h"
#include "Notnhac.h"
#include <iostream>
using namespace std;


void NotNhac::Nhap(){ 
 //Nhap cao do 
    int t; 
    cout << "Nhap gia tri cao do: "; 
    cout << "1.Do(C) 2.Re(D) 3.Mi(E) 4.Fa(F)"; 
    cout << "5.Sol(G) 6.La(A) 7.Si(B) "; 
    cin >> t; 
    CaoDo = t; 

 //Nhap truong do 
    KyHieu::Nhap();  
} 

int NotNhac::LayCaoDo(){ 
 return CaoDo; 
} 
