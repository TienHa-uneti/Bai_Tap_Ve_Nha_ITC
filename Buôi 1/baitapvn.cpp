#include<iostream>

using namespace std;
int main()
{
	/* Phan 1; if else
	Bai 1: Vi?t chýõng tr?nh cho phép nh?p vào th? (1->7) trong tu?n, 
	n?u th? không h?p l? th? cho nh?p l?i. Sau ðó cho bi?t th? 
	ð? nh?p có tên là g? và xu?t k?t qu? ra màn h?nh. (1: Sunday, 2: Monday, …)
	*/
/*
	cout << " =========Bai 1======= " << endl;
	int n;
	cout << " Nhap vao thu trong tuan " << endl;
	do
	{
		cin >> n;
		if( n < 1 || n> 7 )
		{
			cout << " Nhap sai vui long nhap lai " << endl;
		}	
	}while (n < 1 || n > 7);
		
	if ( n == 1 )
	{
		cout << n << " :Chu Nhat " << endl;
	}else if ( n == 2 )
	{
		cout << n << " :Thu Hai " << endl;
	}else if ( n == 3 )
	{
		cout << n << " :Thu Ba " << endl;
	}else if ( n == 4 )
	{
		cout << n << " :Thu Tu " << endl;
	}else if ( n == 5 )
	{
		cout << n << " :Thu Nam " << endl;
	}else if ( n == 6 )
	{
		cout << n << " :Thu Sau " << endl;
	}else if ( n == 7 )
	{
		cout << n << " :Thu Bay " << endl;
	}
*/	
	
	/*2. Vi?t chýõng tr?nh cho phép nh?p s? KW ði?n tiêu th? t? bàn phím. 
	Sau ðó tính ti?n ði?n và xu?t k?t qu? ra màn h?nh. - N?u s? KW: 0 -> 100: 
	ðõn giá 2000 ð?ng/KW. - N?u s? KW: 101 -> 200: ðõn giá 2500 ð?ng/KW. - N?u s? KW: 201 -> 300: 
	ðõn giá 3000 ð?ng/KW. - N?u s? KW: > 300: ðõn giá 5000 ð?ng/KW.
	*/
	
/*	
	cout << " =========Bai 2======= " << endl;
	int n, tongtien;
	cout << " Nhap so KW tieu thu " << endl;
	do
	{
		cin >> n;	
		if( n < 0 )
		{
			cout << " Nhap sai vui long nhap lai " << endl;
		}	
	}while(n < 0);
	
	if ( n <= 100 )
	{
		tongtien = n * 2000;
		cout << " tong tien la:  " << tongtien << " dong " << endl;
	}else if ( n <= 200 )
	{
		tongtien = n * 2500;
		cout << " tong tien la:  " << tongtien << " dong " << endl;
	}else if ( n <= 300 )
	{
		tongtien = n * 3000;
		cout << " tong tien la:  " << tongtien << " dong " << endl;
	}else if ( n > 300 )
	{
		tongtien = n * 5000;
		cout << " tong tien la:  " << tongtien << " dong " << endl;
	}
	
*/
	
	/* Phan 2: vong lap
	Bai 1: Vi?t chýõng tr?nh tính tính tích P=2*4*6*...*2n.
	*/
/*
	cout << " ===========Bai 1=========== " << endl;
	int n, P;
	cout << " Nhap n " << endl;
	do{
        cin >> n;
        if( n < 0 )
		{
            cout << " Nhap sai.Yeu cau nhap lai! ";
        }
    }while ( n < 0 );	
    
    for ( int i = 0; i <= n; i++ )
    {
    	P = P + 2*i;
	}
	cout << " Tong P la: " << P << endl;
*/	
	
	/*  Vi?t chýõng tr?nh v? tam giác sao có chi?u cao n.
	Ví d?: n=4
	****
	***
	**
	*
	*/

/*
	cout << " ===========Bai 2=========== " << endl;
	int m, n;
	cout << " Nhap m " << endl;
	cin >> m;
	n = m;

	if ( m > 0 )
	{
		for ( int i = 1; i <= m; i++ )
		{
			for ( int j = 1; j <= n; j++)
			{
				cout << " * ";
			} 
			n--;
			cout << endl;
		}
	}else 
	{
		cout << " Nhap sai vui long nhap lai ";
	}
*/
	return 0;
}







