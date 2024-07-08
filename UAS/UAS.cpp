
#include <iostream>
using namespace std;

class MataKuliah
{
private:
	float presensi, activity, exercise, tugasAkhir;
public:
	string status;
	MataKuliah()
	{
		presensi = 0.0;
		activity = 0.0;
		exercise = 0.0;
		tugasAkhir = 0.0;
	}
	virtual void namaMataKuliah()
	{
		return;
	}
	virtual void inputNilai()
	{
		return;
	}
	virtual float hitungNilaiAkhir()
	{
		return;
	}
	virtual void cekKelulusan()
	{
		return;
	}
	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}
	void setActivity(float nilai)
	{
		this->activity = nilai;
	}
	float getActivity()
	{
		return activity;
	}
	void setExercise(float nilai)
	{
		this->exercise = nilai;
	}
	float getExercise()
	{
		return exercise;
	}
	void setTugasAkhir(float nilai)
	{
		this->tugasAkhir = nilai;
	}
	float getTugasAkhir()
	{
		return tugasAkhir;
	}
};

class Pemrograman :public MataKuliah
{
public:
	void inputNilai() {

		cout << "Masukkan nilai presensi = ";
		cin >> presensi;
		cout << "Masukkan nilai activity = ";
		cin >> activity;
		cout << "Masukkan nilai exercise = ";
		cin >> exercise;


	}
	float hitungNilaiAkhir(float presensi, float activity, float exercise, float tugasAkhir ) {
		return presensi + activity + exercise + tugasAkhir;
	}

	void cekKelulusan() {
		if ((hitungNilaiAkhir / 4) >= 75) {
			status = "Selamat Anda dinyatakan Lulus";

		}status = "Anda dinyatakan tidak tidak lulus";
	}
	
};
class Jaringan :public MataKuliah
{
public:


};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;
	pemrograman.inputNilai;

	cout << "1. Pemrograman " << endl;
	cout << "2 Jaringan " << endl;
	cout << "3. Keluar " << endl;
	cout << "Pilihan = ";
	cin >> pilih;
}


