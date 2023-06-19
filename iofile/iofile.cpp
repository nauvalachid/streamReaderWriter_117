#include <fstream>
#include <iostream>
using namespace std;

int main () {
	string baris;

	//membuka file dalam mode menulis.
	ofstream outfile;   
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">=Menulis file,\'q\q' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while(true){
		cout << "_";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);