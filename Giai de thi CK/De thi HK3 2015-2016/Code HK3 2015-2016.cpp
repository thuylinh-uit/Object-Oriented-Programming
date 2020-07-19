#include <iostream>
using namespace std;

#define KIM     0
#define THUY    1
#define MOC     2
#define HOA     3
#define THO     4

#define THUONG  0
#define BOSS    1

class DoiTuongGame {
    protected:
        int capDo;
        int hanh;
    public:
        int getHanh() {
            return hanh;
        }
        virtual void nhap() {
            cout<<"-capDo: ";
            cin>>capDo;
            
            cout<<"-hanh: (0.Kim; 1.Thuy; 2.Moc; 3.Hoa; 4.Tho)- ";
            cin>>hanh;
        }
        virtual void xuat() {
            string tenHanh[5] = {"Kim", "Thuy", "Moc", "Hoa", "Tho"};
            cout<<"capDo: "<<capDo<<"; hanh: "<<tenHanh[hanh];
        }
        
        virtual int tinhSatThuong() = 0;
        
        float tinhPhanTramSatThuongThem(DoiTuongGame* B) {
            //A sinh B;
            if(hanh + 1 == B->getHanh())
                return 0.1;
             
            //A khac B;
            if(hanh + 2 == B->getHanh())
                return 0.2;
            
            //A bi B khac
            if(hanh - 2 == B->getHanh())
                return -0.2;
             
            return 0;
             
        }
        int soSanhSatThuong(DoiTuongGame* B) {
            float satThuongAB = tinhSatThuong() * (1 + tinhPhanTramSatThuongThem(B));
            float satThuongBA = B->tinhSatThuong() * (1 + B->tinhPhanTramSatThuongThem(this));
            
            cout <<endl;
            cout<<"Sat thuong A tac dong len B = "<<satThuongAB<<endl;
            cout<<"Sat thuong B tac dong len A = "<<satThuongBA<<endl;

            if(satThuongAB > satThuongBA) return 1;
            if(satThuongAB < satThuongBA) return -1;
            return 0;
        }
};

class NhanVat: public DoiTuongGame {
    protected:
        string monPhai;
    public:
        void nhap() {
            DoiTuongGame::nhap();
            
            string tenMonPhai[10] = {"ThieuLam", "ThienVuong", "NguDoc", "DuongMon", "ThuyYen",
                                     "NgaMy", "CaiBang", "ThienNhan", "VoDang","ConLuan"};
            
            int chonPhai;
            cout<<"-mon phai: (0."<<tenMonPhai[hanh*2]<<"; 1."<<tenMonPhai[hanh*2 + 1]<<")- ";
            cin>>chonPhai;
            monPhai = (chonPhai == 0) ? tenMonPhai[hanh*2] : tenMonPhai[hanh*2 + 1];
        }
        int tinhSatThuong() {
            return capDo * 5;
        }
        virtual void xuat() {
            cout<<"+nhanVat: ";
            DoiTuongGame::xuat();
            cout<<"; monPhai = "<<monPhai<<"; satThuong = "<<tinhSatThuong()<<endl;
        }
};

class QuaiVat: public DoiTuongGame {
    protected:
        int loaiQuai;
    public:
        void nhap() {
            DoiTuongGame::nhap();
            cout<<"-loai quai: (0.thuong; 1.boss)- ";
            cin>>loaiQuai;
        }
        virtual void xuat() {
            cout<<"+quaiVat: ";
            DoiTuongGame::xuat();
            cout<<"; loaiQuai = "<<(loaiQuai == THUONG? "thuong": "boss")<<"; satThuong = "<<tinhSatThuong()<<endl;
        }
        int tinhSatThuong() {
            return (loaiQuai == THUONG) ? (capDo * 3) : (capDo * 7);
        }
};

int main()
{
    //3.1
    int soLuong, chon;
    cout<<"So luong nhan vat + quai vat: ";
    cin>>soLuong;
    
    cout <<endl;
    DoiTuongGame** dsDoiTuongGame = new DoiTuongGame*[soLuong];
    for (int i = 0; i < soLuong; i++) {
        cout <<"Doi tuong "<<i+1<<":"<<endl;
        cout<<"-chon loai DTG: (0.nhan vat 1.quai vat)"<<"- ";
        cin>>chon;
        
        if(chon == 0)
            dsDoiTuongGame[i] = new NhanVat();
        else
            dsDoiTuongGame[i] = new QuaiVat();
        
        dsDoiTuongGame[i]->nhap();
    }
    cout <<endl;
    
    cout<<"Danh sach doi tuong game da nhap: "<<endl;
    for (int i = 0; i < soLuong; i++)
        dsDoiTuongGame[i]->xuat();
    cout <<endl;
    
    //3.2:
    int viTriMax = 0;
    int satThuongMax = dsDoiTuongGame[0]->tinhSatThuong();
    
    for (int i = 1; i < soLuong; i++)
        if(dsDoiTuongGame[i]->tinhSatThuong() > satThuongMax) {
            satThuongMax = dsDoiTuongGame[i]->tinhSatThuong();
            viTriMax = i;
        }

    cout<<"Doi tuong game co sat thuong lon nhat la: "<<endl;
    dsDoiTuongGame[viTriMax]->xuat();
    cout <<endl;
    
    //3.3:
    cout <<"Nhap doi tuong nhan vat A:"<<endl;
    DoiTuongGame* X = new NhanVat();
    X->nhap();
    cout <<"Nhap doi tuong nhan vat B:"<<endl;
    DoiTuongGame* Y = new NhanVat();
    Y->nhap();
    
    cout<<"So sanh: "<< X->soSanhSatThuong(Y)<<endl;

    return 0;
}
