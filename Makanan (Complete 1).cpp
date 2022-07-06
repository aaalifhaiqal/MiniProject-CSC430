#include <iostream>
using namespace std;

int main ()
{
	int totalHarga=0, berapaOrang;
	int totalBreakfast, totalLunch, totalDinner, breakfast[100], lunch[100], dinner[100];

	cout << "How many days for breakfast?\n";
	cin >> totalBreakfast;

	cout << "How many days for Lunch?\n";
	cin >> totalLunch;
	
	cout << "How many days for Dinner?\n";
	cin >> totalDinner;
	cout << endl;

	for (int i=0; i<totalBreakfast; i++)
	{
		cout << "How many person for day " << i+1 << "?\n";
		cin >> breakfast[100];
		
		totalHarga = totalHarga + 50*breakfast[100];
	}
	
	cout << endl;
	

	for (int i=0; i<totalLunch; i++)
	{
		cout << "How many person for day " << i+1 << "?\n";
		cin >> lunch[100];
		
		totalHarga = totalHarga + 50*lunch[100];
	}
	
	cout << endl;
	
	for (int i=0; i<totalDinner; i++)
	{
		cout << "How many person for day " << i+1 << "?\n";
		cin >> dinner[100];
		
		totalHarga = totalHarga + 50*dinner[100];
	}
	
	cout << endl;
	
	for (int i=0; i<totalBreakfast; i++)
	{
		cout << "Day " << i+1 << " for breakfast : " << breakfast[100] << " person" << endl;
	}
	
	cout << endl;
	
	for (int i=0; i<totalLunch; i++)
	{
		cout << "Day " << i+1 << " for lunch : " << lunch[100] << " person" << endl;
	}
	
	cout << endl;
	
	for (int i=0; i<totalDinner; i++)
	{
		cout << "Day " << i+1 << " for dinner : " << dinner[100] << " person" << endl;
	}
	
	cout << "\nTotal Harga : RM" << totalHarga;
}
