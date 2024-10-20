//Hoang Thang Long OOP8.9 73DCTM22199
#include<iostream>
using namespace std;
//lop: tap hop cacs doi tuong co chung thuoc tinh va method
class PhanSo{
    //trong 1 lop co 2 thanh phan
    //1. thuoc tinh
    private:
    int ts, ms;
    //2. phuong thuc
    //pham vi truy xuat: private, protect, public
    public:
    //get: chuc nang lay du lieu cua thuoc tinh
    //set: truyen du lieu cho thuoc tinh
    int getts(){
        return ts;
    }
    int getms(){
        return ms;
    }

    void setts(int ts);
    void setms(int ms);
    void nhap();
    void xuat();
    PhanSo cong(PhanSo p);
    PhanSo tru(PhanSo p);
};
void PhanSo::setts(int ts){
    this->ts=ts;
}
void PhanSo::setms(int ms){
    this->ms=ms;
}
void PhanSo::nhap(){
    cout<<"nhap ts: ";cin>>ts;
    do{
        cout<<"nhap ms: ";cin>>ms;
    } while (ms==0);
}
void PhanSo :: xuat(){
    cout<<ts<<"/"<<ms;
	}
    PhanSo PhanSo::cong(PhanSo p){
    	//this->ts/this->ms +p.ts/p.ms
        PhanSo kq;
        kq.ts=this->ts*p.ms+this->ms*p.ts;
        kq.ms=this->ms*p.ms;
        return kq;
    }
	PhanSo PhanSo::tru(PhanSo p) {
  	  PhanSo kq;
  	  kq.ts = this->ts * p.ms - this->ms * p.ts;
  	  kq.ms = this->ms * p.ms;
  	  return kq;
}
//xay dung nhap, xuat
//xay dung method cong, tru, nhan, chia

int main(){
    PhanSo p,q;//khai bao bien doi tuong
    p.setts(2);
    p.setms(4);
    cout<<"ps= "<<p.getts()<<"/"<<p.getms()<<endl;
	//q.nhap();
    //chay nhap xuat
    q.nhap();
    cout<<"phan so vua nhap: ";
    q.xuat();
    PhanSo c=p.cong(q);
    cout<<"\ntong la: ";
    c.xuat();
    
    PhanSo d = p.tru(q);
    cout<<"\nhieu la: ";
    d.xuat();
    //chay getter va setter
/*  p.setts(2);
    p.setms(4);
    cout<<"tu so: "<<p.getts()<<"/"<<p.getms();
*/
    //chay nhap xuat
    //chay cong, tru, nhan, chia
}
