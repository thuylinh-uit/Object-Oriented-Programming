#include <iostream>
using namespace std;

#define CHI_SO_CAO 70
#define CHI_SO_THAP 30
#define SO_YEU_TO 5

class YeuTo{
  protected:
    int chiSo;
    string tenYeuTo;
  public:
    YeuTo(int chiSo, string tenYeuTo){
        this->chiSo = chiSo;
        this->tenYeuTo = tenYeuTo;
    }
    void nhap() {
            cout <<"-"<<tenYeuTo<<": ";
            cin >>chiSo;
        }
    int get_chiSo(){
        return chiSo;
    }
    
    virtual void inChiSoCao() = 0;
    virtual void inChiSoThap() = 0;
    
    void xuat(){
        cout <<tenYeuTo<<"\t\t\t";
        if(chiSo >= CHI_SO_CAO)
            this->inChiSoCao();
        else if (chiSo <= CHI_SO_THAP)
            this->inChiSoThap();
        else
            cout<<"Ko xac dinh"<<endl;
    }
    ~YeuTo(){}
};

class TuChuTanTam: public YeuTo{
  public:
    TuChuTanTam(int chiSo = 50, string tenYeuTo = "Tu chu tan tam (C)"):YeuTo(chiSo, tenYeuTo){}
    void inChiSoCao() {
            cout<<"Mo ta C cao"<<endl;
        }
    void inChiSoThap() {
        cout<<"Mo ta C thap"<<endl;
    }
    ~TuChuTanTam(){}
};

class HuongNgoai: public YeuTo{
  public:
    HuongNgoai(int chiSo = 50, string tenYeuTo = "Huong ngoai (E)"):YeuTo(chiSo, tenYeuTo){}
    void inChiSoCao() {
            cout<<"Mo ta E cao"<<endl;
        }
    void inChiSoThap() {
        cout<<"Mo ta E thap"<<endl;
    }
    ~HuongNgoai(){}
};

class HoaDongDeChiu: public YeuTo{
  public:
    HoaDongDeChiu(int chiSo = 50, string tenYeuTo = "Hoa dong de chiu (A)"):YeuTo(chiSo, tenYeuTo){}
    void inChiSoCao() {
            cout<<"Mo ta E cao"<<endl;
        }
    void inChiSoThap() {
        cout<<"Mo ta E thap"<<endl;
    }
    ~HoaDongDeChiu(){}
};

class SanSangTraiNghiem: public YeuTo{
  public:
    SanSangTraiNghiem(int chiSo = 50, string tenYeuTo = "San sang trai nghiem (O)"):YeuTo(chiSo, tenYeuTo){}
    void inChiSoCao() {
            cout<<"Mo ta O cao"<<endl;
        }
    void inChiSoThap() {
        cout<<"Mo ta O thap"<<endl;
    }
    ~SanSangTraiNghiem(){}
};

class BatOnCamXuc: public YeuTo{
  public:
    BatOnCamXuc(int chiSo = 50, string tenYeuTo = "Bat on cam xuc (N)"):YeuTo(chiSo, tenYeuTo){}
    void inChiSoCao() {
            cout<<"Mo ta N cao"<<endl;
        }
    void inChiSoThap() {
        cout<<"Mo ta N thap"<<endl;
    }
    ~BatOnCamXuc(){}
};

class DanhGiaTamLy{
    private:
        YeuTo* DGTL[SO_YEU_TO];
    public:
        DanhGiaTamLy(int C=50, int E=50, int A=50, int O=50, int N=50){
            DGTL[0]=new TuChuTanTam(C);
            DGTL[1]=new HuongNgoai(E);
            DGTL[2]=new HoaDongDeChiu(A);
            DGTL[3]=new SanSangTraiNghiem(O);
            DGTL[4]=new BatOnCamXuc(N);
        }
        void nhap(){
            for(int i=0; i<SO_YEU_TO; i++)
                DGTL[i]->nhap();
        }
        void xuat(){
            for(int i=0; i<5; i++){
                cout <<DGTL[i]->get_chiSo()<<"\t";
                DGTL[i]->xuat();
            }
        }
        
        bool canLuuY(){
            return (DGTL[0]->get_chiSo() <= CHI_SO_THAP || DGTL[4]->get_chiSo() >= CHI_SO_CAO);
        }
        ~DanhGiaTamLy(){
            for(int i=0; i<5; i++)
                delete DGTL[i];
        }
};

int main(){
    // Cau 1:
    // DanhGiaTamLy KQ;
    // KQ.nhap();
    
    //Cau 2:
    int n;
    cout <<"Nhap so ket qua: ";
    cin >> n;
    DanhGiaTamLy* KQ;
    KQ = new DanhGiaTamLy[n];
    for(int i = 0; i<n; i++){
        cout <<"KQ "<<i+1<<":"<<endl;
        KQ[i].nhap();
    }
    
    // Cau 3:
    int chon = rand()%n; 
    cout <<"\nDanh gia KQ "<<chon+1<<endl;
    KQ[chon].xuat();
    
    // Cau 4:
    int dem = 0;
    cout <<"\nCac ket qua can luu y: "<<endl;
    for(int i=0; i<n ;i++)
        if(KQ[i].canLuuY() == true){
            cout <<"-KQ "<<i+1 <<" "<<endl;
            dem++;
        }
    if(dem == 0)
        cout <<"Khong co ket qua nao!" <<endl;
        
    delete[] KQ;
    return 0;
}

