#include <iostream>
using namespace std;
int main(){
int nilai;
string grade,keterangan;
cout << "=== Program Grade Nilai ===" << endl;
cout << "Inputkan nilai akhir: ";
cin >> nilai;
// menggunakan percabangan if/esle/if
if (nilai >= 90) {
grade = "A";
keterangan = "Lulus";
} else if (nilai >= 80) {
grade = "B+";
keterangan = "Lulus";
} else if (nilai >= 70) {
grade = "B";
keterangan = "Lulus";
} else if (nilai >= 60) {
grade = "C+";
keterangan = "Mengulang";
} else if (nilai >= 50) {
grade = "C";
keterangan = "Mengulang";
} else if (nilai >= 40) {
grade = "D";
keterangan = "Gagal";
} else if (nilai >= 30) {
grade = "E";
keterangan = "Gagal";
} else {
grade = "F";
} 
cout << "Grade anda: " << grade << endl;
cout << "Keterangan: " << keterangan << endl;
return 0;
}