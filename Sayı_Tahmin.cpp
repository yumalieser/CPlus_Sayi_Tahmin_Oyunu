#include <iostream>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
	string oyun;
	int tut_sayi,g_sayi,asama;
	int sayac=1;
		cout<<"Sayi Tahmin Oyununa Hosgeldiniz...";
		cout<<"Oyundan Cikmak Icin Q 'ya Devam Etmek Icin E 'ye Basin";
		cin>>oyun;

		if(oyun=="q")
		{
			cout<<"Uygulamadan Cikis Yapiliyor...";
		}
		else if(oyun=="e")
		{
			cout<<"Lutfen Bir asama secin \n1.Kolay (0-100) \n2.Zor (0-1000)"<<endl;
			cin>>asama;
			if (asama == 1)
			{
				srand(time(NULL));
				tut_sayi=1+rand()%100;
				cout <<"Sayi Tahmininizi Girin : ";
				cin>>g_sayi;
				while (g_sayi != tut_sayi)
				{
					cout <<"Sayi Tahmininiz Yanlis Tekrar Girin : ";
					if (g_sayi < tut_sayi)
					{
						cout<<"Tahmininiz Sayidan Dusuk.Daha yuksek bir deger deneyin..."<<endl;
						cin>>g_sayi;
						sayac+=1;
						continue;
					}
					else if (g_sayi > tut_sayi)
					{
						cout<<"Tahmininiz Sayidan Yuksek.Daha dusuk bir deger deneyin..."<<endl;
						cin>>g_sayi;
						sayac+=1;
						continue;
					}
				}
				if (g_sayi == tut_sayi)
				{
					cout<<"Tebrikler Tahmininiz Doðru Tutulan Sayi "<< tut_sayi <<" idi. Oyunu Toplamda "<<sayac<<" adimda bitirdiniz :)"<<endl;
				}
			}
			else if (asama == 2)
			{
				srand(time(NULL));
				tut_sayi=1+rand()%1000;
				cout <<"Sayi Tahmininizi Girin : ";
				cin>>g_sayi;
				while (g_sayi != tut_sayi)
				{
					cout <<"Sayi Tahmininiz Yanlis Tekrar Girin : ";
					if (g_sayi < tut_sayi)
					{
						cout<<"Tahmininiz Sayidan Dusuk.Daha yuksek bir deger deneyin..."<<endl;
						cin>>g_sayi;
						sayac+=1;
						continue;
					}
					else if (g_sayi < tut_sayi)
					{
						cout<<"Tahmininiz Sayidan Yuksek.Daha dusuk bir deger deneyin..."<<endl;
						cin>>g_sayi;
						sayac+=1;
						continue;
					}
				}
				if (g_sayi == tut_sayi)
				{
					cout<<"Tebrikler Tahmininiz Doðru Tutulan Sayi "<< tut_sayi <<" idi. Oyunu Toplamda "<<sayac<<" adimda bitirdiniz :)"<<endl;
				}
			}
			else
			{
				cout<<"Geçersiz Islem...";
			}
		}
		else
		{
			cout<<"Gecersiz Bir Giris Yaptiniz...";
		}
    return 0;
}
