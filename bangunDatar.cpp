// Progam ini bertujuan untuk menghitung Keliling dan Luas Bangun Datar

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // DECLARATION
    char loop;
    int menu,pilih;

    // LINGKARAN
    double pi,jari;
    pi = 3.14159265358979323846;  
    // PERSEGI
    double s;
    // PERSEGI PANJANG
    double p,l;
    // SEGITIGA
    char segitiga;
    double s1,s2,s3,luas,alas,t;
    // JAJAR GENJANG
    double alas1,t1;
    //TRAPESIUM
    double a,b,c,d,sj1,sj2,t2;
    // BELAH KETUPAT
    double bk,dg1,dg2;


    // START
    do {
        
        menu :
        cout << "\n=======================================================================" << endl;
        cout << "           'Ayo Menghitung Luas dan Keliling Bangun Datar'" << endl;
        cout << "=======================================================================" << endl << endl;
        cout << "Silahkan pilih menu: " << endl;
        cout << "1. Ayo Menghitung Keliling & Luas Lingkaran" << endl;
        cout << "2. Ayo Menghitung Keliling & Luas Persegi" << endl;
        cout << "3. Ayo Menghitung Keliling & Luas Persegi Panjang" << endl;
        cout << "4. Ayo Menghitung Keliling & Luas Segitiga" << endl;
        cout << "5. Ayo Menghitung Keliling & Luas Jajar Genjang" << endl;
        cout << "6. Ayo Menghitung Keliling & Luas Trapesium" << endl;
        cout << "7. Ayo Menghitung Keliling & Luas Belah Ketupat" << endl;
        cout << "8. Keluar" << endl;
        cin >> menu;

        // INPUT OUTPUT
        switch (menu){
        case 1:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Lingkaran" << endl;
            cout << "Masukan jari-jari Lingkaran: ";
            cin >> jari;
            cout << "Keliling Lingkaran: " << 2*pi*jari << endl;
            cout << "Luas Lingkaran: " << (jari*jari)*pi << endl << endl;
            system("pause");
            goto ask;
            
        case 2:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Persegi" << endl;
            cout << "Masukan panjang sisi Persegi: ";
            cin >> s;
            cout << "Keliling Persegi: " << 4*s << endl;
            cout << "Luas Persegi: " << s*s << endl << endl;
            system("pause");
            goto ask;
            
        case 3:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Persegi Panjang" << endl;
            cout << "Masukan panjang sisi: ";
            cin >> p;
            cout << "Masukan lebar sisi: ";
            cin >> l;
            cout << "Keliling Persegi Panjang: " << 2*(p+l) << endl;
            cout << "Luas Persegi Panjang: " << p*l << endl << endl;
            system("pause");
            goto ask;
            
        case 4:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Segitiga" << endl;
            cout << "=Keliling=" << endl;
            cout << "Masukan panjang sisi 1 Segitiga: ";
            cin >> s1;
            cout << "Masukan panjang sisi 2 Segitiga: ";
            cin >> s2;
            cout << "Masukan panjang sisi 3 Segitiga: ";
            cin >> s3;

            luas = s1+s2+s3;
            cout << "Keliling Segitiga: " << luas  << endl;
            
            cout << "=Luas=" << endl;
            cout << "Apakah tinggi & alas Segitiga diketahui? (y/t) ";
            cin >> segitiga;

            switch (segitiga){
            case 't':
                cout << "Luas Segitiga: " << sqrt((0.5*luas)*((0.5*luas)-s1)*((0.5*luas)-s2)*((0.5*luas)-s3))<< endl << endl;
                system("pause");
                goto ask;

            case 'y': 
                cout << "Masukan alas Segitiga: ";
                cin >> alas;
                cout << "Masukan tinggi Segitiga: ";
                cin >> t;
                cout << "Luas Segitiga: " << 0.5*alas*t << endl << endl;
                system("pause");
                goto ask;
            }
  
        case 5:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Jajar Genjang" << endl;
            cout << "Masukan alas Jajar Genjang: ";
            cin >> alas1;
            cout << "Masukan tinggi Jajar Genjang: ";
            cin >> t1;
            
            cout << "Keliling Jajar Genjang: " << 2*(alas1+t1) << endl;
            cout << "Luas Jajar Genjang: " << alas1*t1 << endl << endl;
            system("pause");
            goto ask;
            
        case 6:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Trapesium" << endl;
            cout << "=Keliling=" << endl;
            cout << "Masukan panjang sisi 1 Trapesium: ";
            cin >> a;
            cout << "Masukan panjang sisi 2 Trapesium: ";
            cin >> b;
            cout << "Masukan panjang sisi 3 Trapesium: ";
            cin >> c;
            cout << "Masukan panjang sisi 4 Trapesium: ";
            cin >> d;
            cout << "Keliling Trapesium: " << a+b+c+d << endl;
            cout << "=Luas=" << endl;
            cout << "Masukan panjang sisi sejajar 1 Trapesium: ";
            cin >> sj1;
            cout << "Masukan panjang sisi sejajar 2 Trapesium: ";
            cin >> sj2;
            cout << "Masukan tinggi Trapesium: ";
            cin >> t2;
            cout << "Luas Trapesium: " << 0.5*(sj1+sj2)*t2 << endl << endl;
            system("pause");
            goto ask;
            
        case 7:
            system("cls");
            cout << "Ayo Menghitung Keliling & Luas Belah Ketupat" << endl;
            cout << "Masukan panjang sisi Belah Ketupat: ";
            cin >> bk;
            cout << "Masukan panjang Diagonal 1 Belah Ketupat: ";
            cin >> dg1;
            cout << "Masukan panjang Diagonal 2 Belah Ketupat: ";
            cin >> dg2;
            cout << "Keliling Belah Ketupat: " << 4*bk << endl;
            cout << "Luas Belah Ketupat: " << 0.5*dg1*dg2 << endl << endl;
            system("pause");
            goto ask;
            
        case 8:
            goto end;

        default:
            system("cls");
            cout << "Maaf, pilihan anda tidak ada" << endl;
            system("pause");
            goto menu;
        }
        ask:
        cout << "Apakah anda ingin kembali ke menu awal? (y/t) .. ";
        cin >> loop;
        system("cls");

    } while ( loop == 'y');

    // END
    end:
    cout << endl;
    cout << "Terima kasih!!" << endl;
    cout << "Semoga harimu menyenangkan!" << endl;

    system("pause");
    return 0;
}
