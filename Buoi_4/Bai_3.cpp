#include<iostream>
using namespace std;

class DaThuc3
{
	private:
		int a, b, c, d;
	
	public:
		DaThuc3(int a = 0, int b = 0, int c = 0, int d = 0)
		{
			this -> a = a;
			this -> b = b;
			this -> c = c;
			this -> d = d;
		}
		
		~DaThuc3(){}
		
		friend istream& operator >> (istream& is, DaThuc3 &a)// Ham nhap
		{
			cout << "\nNhap a: ";
			is >> a.a; // is bang cin trong ham ban
			cout << "\nNhap b: ";
			is >> a.b;
			cout << "\nNhap c: ";
			is >> a.c;
			cout << "\nNhap d: ";
			is >> a.d;
		}
		friend ostream& operator << (ostream& os, DaThuc3 a) // ham xuat
		{
			os << a.a
			   << a.b
			   << a.c
			   << a.d << endl;
			   return os;	
		}

};

int main()
{
	int n;
	cout << "\n Nhap n = ";
	cin >> n;
	DaThuc3 a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cout<<a[i];
	}
	return 0;
}






