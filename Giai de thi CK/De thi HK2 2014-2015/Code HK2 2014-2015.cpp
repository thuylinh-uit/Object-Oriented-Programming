#include <iostream>
using namespace std;

#define trang 0
#define   den 1
#define  trai 0
#define  phai 1

class QuanCo{
protected:
    int mau, hang, cot;
public:
    QuanCo(int mau){
        this->mau = mau;
    }
    virtual void cachDi() = 0;
    ~QuanCo();
};

class Tuong:public QuanCo{
public:
    Tuong(int mau):QuanCo(mau){
        hang = (mau == trang) ? 1 : 10;
        cot = 5;
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Tuong trong de thi"<<endl;
    }
    ~Tuong();
};

class Si:public QuanCo{
private:
    int phia;
public:
    Si(int mau, int phia):QuanCo(mau){
        this->phia = phia;
        
        if(mau == trang)
            hang = 1;
        else
            hang = 10;
        
        if(phia == trai)
            cot = 4;
        else
            cot = 6;
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Si trong de thi"<<endl;
    }
    ~Si();
};

class Tinh:public QuanCo{
private:
    int phia;
public:
    Tinh(int mau, int phia):QuanCo(mau){
        this->phia = phia;
        
        if(mau == trang)
            hang = 1;
        else
            hang = 10;
        
        if(phia == trai)
            cot = 3;
        else
            cot = 7;
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Tinh trong de thi"<<endl;
    }
    ~Tinh();
};

class Ma:public QuanCo{
private:
    int phia;
public:
    Ma(int mau, int phia):QuanCo(mau){
        this->phia = phia;
        
        if(mau == trang)
            hang = 1;
        else
            hang = 10;
        
        if(phia == trai)
            cot = 2;
        else
            cot = 8;
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Ma trong de thi"<<endl;
    }
    ~Ma();
};

class Xe:public QuanCo{
private:
    int phia;
public:
    Xe(int mau, int phia):QuanCo(mau){
        this->phia = phia;
        
        if(mau == trang)
            hang = 1;
        else
            hang = 10;
        
        if(phia == trai)
            cot = 1;
        else
            cot = 9;
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Xe trong de thi"<<endl;
    }
    ~Xe();
};

class Phao:public QuanCo{
private:
    int phia;
public:
    Phao(int mau, int phia):QuanCo(mau){
        this->phia = phia;
        
        if(mau == trang)
            hang = 3;
        else
            hang = 8;
        
        if(phia == trai)
            cot = 2;
        else
            cot = 8;
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Phao trong de thi"<<endl;
    }
    ~Phao();
};

class Tot:public QuanCo{
private:
    int thuTu;
public:
    Tot(int mau, int thuTu):QuanCo(mau){
        this->thuTu = thuTu;
        
        if(mau == trang)
            hang = 4;
        else
            hang = 7;
        
        switch(thuTu){
            case 1:
                cot = 1;
                break;
            case 2:
                cot = 3;
                break;
            case 3:
                cot = 5;
                break;
            case 4:
                cot = 7;
                break;
            case 5:
                cot = 9;
                break;
        }
    }
    void cachDi(){
        cout<<"In cau mo ta cach di cua quan Tot trong de thi"<<endl;
    }
    ~Tot();
};

class BanCo{
private:
    QuanCo*p[32];
public:
    BanCo(){
        p[0] = new Tuong(trang);
        p[1] = new Si(trang, trai);
        p[2] = new Si(trang, phai);
        p[3] = new Tinh(trang, trai);
        p[4] = new Tinh(trang, phai);
        p[5] = new Ma(trang, trai);
        p[6] = new Ma(trang, phai);
        p[7] = new Xe(trang, trai);
        p[8] = new Xe(trang, phai);
        p[9] = new Phao(trang, trai);
        p[10] = new Phao(trang, phai);
        p[11] = new Tot(trang, 1);
        p[12] = new Tot(trang, 2);
        p[13] = new Tot(trang, 3);
        p[14] = new Tot(trang, 4);
        p[15] = new Tot(trang, 5);
        
        p[16] = new Tuong(den);
        p[17] = new Si(den, trai);
        p[18] = new Si(den, phai);
        p[19] = new Tinh(den, trai);
        p[20] = new Tinh(den, phai);
        p[21] = new Ma(den, trai);
        p[22] = new Ma(den, phai);
        p[23] = new Xe(den, trai);
        p[24] = new Xe(den, phai);
        p[25] = new Phao(den, trai);
        p[26] = new Phao(den, phai);
        p[27] = new Tot(den, 1);
        p[28] = new Tot(den, 2);
        p[29] = new Tot(den, 3);
        p[30] = new Tot(den, 4);
        p[31] = new Tot(den, 5);
    }
    void cachDi(int vt){
        p[vt]->cachDi();
    }
    ~BanCo(){
        for(int i=0; i<32; i++)
            delete p[i];
    }
};


int main()
{
    BanCo* C = new BanCo();
    C->cachDi(0);

    return 0;
}