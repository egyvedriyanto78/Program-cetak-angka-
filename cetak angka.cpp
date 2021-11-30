#include <stdio.h>
//Karena menggunakan printf

#define AkhirLooping 7
//Untuk mencetak angka 1-7 sesuai banyak hari.
//Karena tidak boleh ada magic number, 
//maka dibuat definisi nilai ini.

using namespace std;
//Untuk memudahkan menulis code tanpa harus menambahkan std:: 

int main(void)
//Fungsi utama
{
	int bilangan;
	//deklarasi variabel bilangan
	
	for(bilangan=1; bilangan<=AkhirLooping; bilangan++)
	//membuat looping dari 1-7
	{
		printf("%d",bilangan);
		//mencetak angka 1 2 3 4 5 6 7
	}
	printf("\n");
	//endline
	
	return 0;
	//tanda berakhirnya program
	
}//akhir fungsi main
