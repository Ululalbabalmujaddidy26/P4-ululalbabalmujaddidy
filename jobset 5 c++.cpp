#include <iostream>
#include <cstdlib>
using namespace std;

main (){
	cout<<"Ulul albab almujaddidy (F1B019139)-kel.26\n\n";
	int nim1[2][2];
	int nim2[2][2];
	intjml [2][2];
	int x, y;
	cout<< "==========PERKALIAN MATRIX==========\n";
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			cout<< "**Masukkan index matrikspertama** " << x << "," << y << " = ";
			cin>> nim1[x][y];
		}
	}
	cout<<endl;
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			cout<< "**Masukkan index matrikskedua** " << x << "," << y << " = ";
			cin>> nim2[x][y];
		}
	}
	cout<<endl;
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			jml [x][y] = nim1[x][y]*nim2[x][y];
			cout<<jml [x][y] <<" ";
		}
		cout<<endl;
	}
