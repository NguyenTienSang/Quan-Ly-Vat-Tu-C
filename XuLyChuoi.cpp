#include "KhaiBaoCauTruc.h"
#include "XuLyChuoi.h"
#include "console.h"
#include<iostream>
using namespace std;
#include<string.h>
#include<string>
#include<conio.h>
#define TrangXanh 159
#define XanhTrang 241
#define TrangDen 15
//Ham nhap chu (chu thuong va chu hoa) va so va dau
char ChuVaSo(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{

	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=48 && keykitu <=57 || keykitu >=97 && keykitu<=122 || keykitu>=65 && keykitu<=90 || keykitu == 95 ) && sokytudanhap<dorong)
			{
				if(keykitu>=97 && keykitu<=122)
				{
					keykitu-=32;
				}
				gotoXY(x,y);
				cout<<keykitu;
				chuoi+=keykitu;
				sokytudanhap++;//tang len 1 don vi
				x++;
			}

			else if(keykitu == -32 || keykitu == 13)//NEU LA PHIM DIEU HUONG
			{
				return keykitu;
			}
  		}
}


//Ham nhap chu (chu thuong va chu hoa) va dau cach
char ChuVaDauCach(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{

	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}
			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if(((keykitu >=97 && keykitu<=122) || (keykitu>=65 && keykitu<=90) || (keykitu == 32 && chuoi[sokytudanhap-1] != 32 && sokytudanhap > 0)) && sokytudanhap<dorong)
			{
					if(keykitu>=97 && keykitu<=122)
					{
						keykitu-=32;
					}
					gotoXY(x,y);
					cout<<keykitu;
					chuoi+=keykitu;
					sokytudanhap++;//tang len 1 don vi
					x++;
			}

			else if(keykitu == -32 || keykitu == 13 || keykitu ==0)//NEU LA PHIM DIEU HUONG
			{
				if(chuoi[sokytudanhap-1] == 32)
				{
					gotoXY(x,y);
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
				return keykitu;
			}
  		}
}



//Ham nhap chu (chu thuong va chu hoa) va dau cach
char ChuSoVa_(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{

	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=97 && keykitu<=122 || keykitu>=65 && keykitu<=90  || keykitu>=48 && keykitu<=57 || keykitu == 95 ) && sokytudanhap<dorong)
			{
					if(keykitu>=97 && keykitu<=122)
					{
						keykitu-=32;
					}
					gotoXY(x,y);
					cout<<keykitu;
					chuoi+=keykitu;
					sokytudanhap++;//tang len 1 don vi
					x++;
			}

			else if(keykitu == -32 || keykitu == 13)//NEU LA PHIM DIEU HUONG
			{
				return keykitu;
			}
  		}
}


char ChuSoDauCachVa_(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{

	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=97 && keykitu<=122 || keykitu>=65 && keykitu<=90  || keykitu>=48 && keykitu<=57 || (keykitu == 32 && chuoi[sokytudanhap-1] != 32 && sokytudanhap > 0) || keykitu == 95 ) && sokytudanhap<dorong)
			{
					if(keykitu>=97 && keykitu<=122)
					{
						keykitu-=32;
					}
					gotoXY(x,y);
					cout<<keykitu;
					chuoi+=keykitu;
					sokytudanhap++;//tang len 1 don vi
					x++;
			}
			else if(keykitu == -32 || keykitu == 13 || keykitu == 0)//NEU LA PHIM DIEU HUONG
			{
				if(chuoi[sokytudanhap-1] == 32)
				{
					gotoXY(x,y);
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
				return keykitu;
			}
  		}
}


char Chu(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{

	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=97 && keykitu<=122 || keykitu>=65 && keykitu<=90) && sokytudanhap<dorong)
			{
				if(keykitu>=97 && keykitu<=122)
				{
					keykitu-=32;
				}
				gotoXY(x,y);
				cout<<keykitu;
				chuoi+=keykitu;
				sokytudanhap++;//tang len 1 don vi
				x++;
			}

			else if(keykitu == -32 || keykitu == 13 || keykitu == 0)//NEU LA PHIM DIEU HUONG
			{
				return keykitu;
			}
  		}
}










//Ham nhap so
char So(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{
	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if((keykitu >=48 && keykitu <=57 ) && sokytudanhap<dorong)
			{
				if(keykitu>=97 && keykitu<=122)
				{
					keykitu-=32;
				}
				gotoXY(x,y);
				cout<<keykitu;
				chuoi+=keykitu;
				sokytudanhap++;//tang len 1 don vi
				x++;
			}

			else if(keykitu == -32 || keykitu == 13 || keykitu ==0)//NEU LA PHIM DIEU HUONG
			{
				return keykitu;
			}
  		}
}



//Ham nhap so va dau cham
char SoVaDauCham(string &chuoi, int dorong,int x, int y,int &sokytudanhap)
{

	char keykitu;
	gotoXY(x,y);
		while(1)
		{
			keykitu = getch();//Bat phim khi nhan mot phim bat ki
			if(keykitu == 8)//Kiem neu la phim nhan la backspace thi se lui nguoc con tro lai va bien ki tu vua nhap vao la khoang trang
			{
				if(sokytudanhap!=0)
				{
					gotoXY(x,y);
					keykitu = 32;//gan ki tu vua nhap vao thanh khoang trang
					cout<<"\b";//Lenh lui nguoc con tro chi vi
					cout<<keykitu;//cout ra ki tu khoang trang
					cout<<"\b";
					sokytudanhap--;//lui lai 1 don vi
					chuoi.erase(sokytudanhap,1);
					x--;
				}
			}

			//Neu phim nhan khong phai la backspace thi in ra ki tu do
			else if(((keykitu >=48 && keykitu <=57) || keykitu == 46 ) && sokytudanhap<dorong)
			{
				if(keykitu>=97 && keykitu<=122)
				{
					keykitu-=32;
				}
				gotoXY(x,y);
				cout<<keykitu;
				chuoi+=keykitu;
				sokytudanhap++;//tang len 1 don vi
				x++;
			}

			else if(keykitu == -32 || keykitu == 13)//NEU LA PHIM DIEU HUONG
			{
				return keykitu;
			}
  		}
}

string ChuyenSoThanhChuoi(int a)
{
	if (a == 0)
	{
		return "0";
	}
	string res = "";
	while (a > 0)
	{
		res.insert(res.begin(), a % 10 + '0');
		a /= 10;
	}
	return res;
}


