#include<iostream>
#include<conio.h>
#include<string.h> 
#include<iomanip> 
using namespace std;


class sanpham{
		private:
		char masanpham[30];
		char tensp[30];
		int namsp;
		public:
			sanpham(char*masanpham=" ", char*tensp =" ",int namsp=0){
				strcpy(this->masanpham, " ");
				strcpy(this->tensp, tensp);
				this->namsp=namsp; 
			}
			 
		void nhap(){
			fflush(stdin);
			cout<<"nhap vao ma san pham:"<<endl;
			cin.getline(masanpham,30);
			cout<<"nhap vao ten san pham:"<<endl;
			cin.getline(tensp,30);
			cout<<"nhap vao nam san pham:"<<endl;
			cin>>namsp; 
		} 
		void xuat(){
			 cout<<setw(15)<<masanpham<<endl;
			 cout<<setw(15)<<tensp<<endl;
			 cout<<setw(15)<<namsp<<endl; 
		} 
		
}; 
class tivi:public sanpham{
	private:
	float chieudai,chieurong;
	public:
	tivi(char*masanpham=" ", char*tensp =" ",int namsp=0,float chieudai=0, float chieurong=0):sanpham(masanpham,tensp,namsp){
		this->chieudai=chieudai;
		this->chieurong=chieurong; 
	} 
	 
	friend istream& operator >>(istream &is, tivi& tv){
		fflush(stdin); 
		tv.nhap();
		cout<<"nhap vao chieu dai:"<<endl;
		is>>tv.chieudai;
		cout<<"nhap vao chieu rong:"<<endl;
		is>>tv.chieurong;
		return is; 
	} 
	friend ostream& operator <<(ostream &os,tivi tv){
		tv.xuat();
		os<<setw(15)<<tv.chieudai<<endl; 
		os<<setw(15)<<tv.chieurong<<endl;
	    os<<setw(15)<<tv.dientich()<<endl;
		return os; 
	} 
	float dientich(){
		return chieudai*chieurong; 
	} 
	
	
}; 
void nhap1(tivi tv[], int n){
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin ti vi thu"<<i+1<<endl;
		fflush(stdin);
		cin>>tv[i]; 
	} 
} 
void xuat1(tivi tv[], int n){
	for(int i=0;i<n;i++){
		cout<<"xuat thong tin ti vi thu"<<i+1<<endl;
		cout<<tv[i]; 
	}
	
} 
void sapxep(tivi tv[],int n){
	cout<<"danh sach sap sep tang dan theo dien tich man hinh la:"<<endl;
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++) 
	if(tv[i].dientich()>tv[j].dientich()){
		swap(tv[i],tv[j]); 
	} 
	for(int i=0;i<n;i++){
		cout<<"\n"<<tv[i]<<"\t\t"; 
	}
	 
} 
 int main(){
 	int n;
	 cout<<"moi nhap so luong ti vi:"<<endl;
	 cin>>n; 
	 tivi*tv;
	 tv=new tivi[n];
	 nhap1(tv,n);
	 xuat1(tv,n); 
	 sapxep(tv,n); 
	 getch(); 
	 
	 return 0; 
 } 

