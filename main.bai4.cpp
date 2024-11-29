#include "KyHieu.h"
#include "Daulang.h"
#include "Notnhac.h"
#include <iostream>
using namespace std;


int main(){ 
    KyHieu *BanNhac[50]; 
    int n; 
//cau 1. Soan ban nhac 
    cout << "Nhap vao so luong cac ky hieu am nhac: "; 
    cin >> n; 
    for (int i = 0; i < n; i++){ 
        int t; 
        cout << "Chon 1 de soan not nhac hoac 2 de soan dau lang: "; 
        cin >> t; 
        switch (t){ 
        case 1: BanNhac[i] = new NotNhac(); 
            break; 
        case 2: BanNhac[i] = new DauLang(); 
            break; 
        } 
        BanNhac[i]->Nhap(); 
    } 
 
//cau 2. Dem dau lang den 
    int dem = 0; 
    for (int i = 0; i < n; i++) {
        if (BanNhac[i]->Ktra_DauLangDen() == true) dem++;      
    }   
    cout << "So dau lang den la: " << dem << "\n"; 
 
//cau 3.Tim not nhac co cao do cao nhat 
    int max = BanNhac[0]->LayCaoDo(); 
    int vitri = 0; 
    for (int i = 1; i < n;i++){
        if (BanNhac[i]->LayCaoDo() > max){ 
            max = BanNhac[i]->LayCaoDo(); 
            vitri = i; 
        } 
    } 
    cout << "Vi tri not nhac co cao do cao nhat la: " << vitri; 
}