#include <iostream>
#include <string>
using namespace std;

class nhomMau{
protected:
    string rh, ten;
public:
    nhomMau(string rh, string ten){
        this->rh = rh;
        this->ten = ten;
    }
    void nhap(){
        cout <<"-Loai Rh: ";
        getline(cin, rh);
    }
    string get_rh(){
        return rh;
    }
    string get_ten(){
        return ten;
    }
    virtual bool ABO(nhomMau* cha, nhomMau* me) = 0;
    virtual bool Rhesus(nhomMau* nguoiCho){
        if(rh == "-" && nguoiCho->get_rh() == "+")
            return false;
        return true;
    }
    ~nhomMau(){}
};

class A: public nhomMau{
public:
    A(string rh = "+"):nhomMau(rh, "A"){}
    bool ABO(nhomMau* cha, nhomMau* me){
        if(cha->get_ten() == "O" && me->get_ten() == "O")
            return false;
        if(cha->get_ten() == "B" && me->get_ten() == "B")
            return false;
        if(cha->get_ten() == "O" && me->get_ten() == "B")
            return false;
        if(cha->get_ten() == "B" && me->get_ten() == "O")
            return false;
        
        return true;
    }
    bool Rhesus(nhomMau* nguoiCho){
        bool phuHopRH = nhomMau::Rhesus(nguoiCho);
        bool phuHopNhomMau = false;
        if(nguoiCho->get_ten() == "A" || nguoiCho->get_ten() == "O")
            phuHopNhomMau = true;
            
        return phuHopRH && phuHopNhomMau;
    }
    ~A(){}
};

class B: public nhomMau{
public:
    B(string rh = "+"):nhomMau(rh, "B"){}
    bool ABO(nhomMau* cha, nhomMau* me){
        if(cha->get_ten() == "A" && me->get_ten() == "A")
            return false;
        if(cha->get_ten() == "A" && me->get_ten() == "O")
            return false;
        if(cha->get_ten() == "O" && me->get_ten() == "A")
            return false;
        if(cha->get_ten() == "O" && me->get_ten() == "O")
            return false;
        
        return true;
    }
    bool Rhesus(nhomMau* nguoiCho){
        bool phuHopRH = nhomMau::Rhesus(nguoiCho);
        bool phuHopNhomMau = false;
        if(nguoiCho->get_ten() == "B" || nguoiCho->get_ten() == "O")
            phuHopNhomMau = true;
            
        return phuHopRH && phuHopNhomMau;
    }
    ~B(){}
};

class O: public nhomMau{
public:
    O(string rh = "+"):nhomMau(rh, "O"){}
    bool ABO(nhomMau* cha, nhomMau* me){
        if(cha->get_ten() == "AB" || me->get_ten() == "AB")
            return false;
        
        return true;
    }
    bool Rhesus(nhomMau* nguoiCho){
        bool phuHopRH = nhomMau::Rhesus(nguoiCho);
        bool phuHopNhomMau = false;
        if(nguoiCho->get_ten() == "O")
            phuHopNhomMau = true;
            
        return phuHopRH && phuHopNhomMau;
    }
    ~O(){}
};

class AB: public nhomMau{
public:
    AB(string rh = "+"):nhomMau(rh, "AB"){}
    bool ABO(nhomMau* cha, nhomMau* me){
        if(cha->get_ten() == "O" || me->get_ten() == "O")
            return false;
        if(cha->get_ten() == me->get_ten() && cha->get_ten() != "AB")
            return false;  
        
        return true;
    }
    ~AB(){}
};


int main()
{
    int n;
    cout <<"Nhap so nguoi: ";
    cin >> n;
    nhomMau*p[n];
    cout <<endl;
    
    // Cau 1:
    string nhom;
    cin.ignore();
    for(int i=0; i<n; i++){
        cout <<"Nguoi thu "<<i+1<<":\n";
        cout <<"-Nhom mau: ";
        getline(cin, nhom);
        if (nhom == "A")
            p[i] = new A();
        else if(nhom == "B")
            p[i] = new B();
        else if(nhom == "O")
            p[i] = new O();
        else
            p[i] = new AB();
        p[i]->nhap();
    }
    cout <<endl;
    
    // Cau 2:
    int cha, me, con;
    cout <<"Chon cha - me - con [1;"<<n<<"]: ";
    cin >> cha >> me >> con;
    cout <<"Kiem tra quy luat di truyen cha="<<p[cha-1]->get_ten()<<" me="<<p[me-1]->get_ten()<<" con="<<p[con-1]->get_ten()<<":"<<endl;
    if(p[con-1]->ABO(p[cha-1], p[me-1]) == true)
        cout <<"Phu hop quy luat di truyen!";
    else
        cout <<"Khong phu hop quy luat di truyen!";
    cout <<"\n\n";
    
    // Cau 3:
    int chon = rand()%n;
    int dem = 0;
    cout <<"Nhung nguoi co the cho mau cho nguoi co nhom mau "<<p[chon]->get_ten()<<p[chon]->get_rh()<<" la: "<<endl;
    for(int i=0; i<n; i++)
        if(p[chon]->Rhesus(p[i])){
            cout <<"+ Nguoi co nhom mau "<<p[i]->get_ten()<<p[i]->get_rh() <<endl;
            dem ++;
        }
    if (dem == 0)
        cout <<"Khong ai co the cho mau!" <<endl;
    return 0;
}