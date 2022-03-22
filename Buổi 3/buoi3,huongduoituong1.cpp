/*#include<iostream>

using namespace std;

class SoPhuc
{
	private:
		int PhanThuc, PhanAo;
	public:
		void nhap()
		{
			cout << "\n Nhap vao phan thuc: ";
			cin>> PhanThuc;
			cout << "\n Nhap vao phan ao: ";
			cin >> PhaAo;
		}
		void xuat()
		{
			cout << "So phuc vua nhap la: " << endl;
			cin >> " a= "<< PhanThuc << " + " << PhanAo <<" j " << endl;
		}
		float tong()
		{
			
		}
};

int main()
{
	
	
	return 0;
}


*/
#include<iostream>

using namespace std;

class SoPhuc
{
	private:
		int pt, pa;
	public:
		void nhap()
		{
			
				cout << " Nhap vao phan thuc " << endl;
				cin >> pt;
				cout << "Nhap vap phan ao " << endl;
				cin >> pa;
			
		}
		void in()
		{
			cout << " \n A = " << pt << " + " << pa << " *j " << endl; 
		}
		
		// getter
		int getPA()
		{
			return pa;
		}
		int getPT()
		{
			return pt;
		}
};

int main()
{
	SoPhuc a[2];
	for ( int i = 0; i < 2; i++)
	{
		a[i] .nhap();
	}
	
	cout << "/n Tong cua 2 so thuc vua nhap la: " 
		 << a[0] .getPT() + a[1] .getPT()
		 << " + " << a[0] .getPA() + a[1] .getPA()
		 << " *j ";
	cout << "/n hieu cua 2 so thuc vua nhap la: "
		 << a[0] .getPT() - a[1] .getPT()
		 << " - " << a[0] .getPA() - a[1] .getPA()
		 << " *j ";
	return 0;
}


















