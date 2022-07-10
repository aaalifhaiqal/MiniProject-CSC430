#include <iostream>
#include <string>
using namespace std;

int makan (int &, int &, int &, int &);
void makanan (int &, int &, int &, int &);

int ambikNamaNoEmel (string &, string &, int &);
void tunjukNamaNoEmel (string &, string &, int &);

float calculateTotalCost (int &, int &, float &);
void displayTotalCost (int &, int &, float &);






int totalHarga=0, totalBreakfast, totalLunch, totalDinner, breakfast[100], lunch[100], dinner[100];

string nama, emel;
int hpNum;

int numDays, roomCategory;
float totalCost = 0;







int main()
{
	ambikNamaNoEmel (nama, emel, hpNum);
	tunjukNamaNoEmel (nama, emel, hpNum);
	
	makan ( totalHarga, breakfast[100], lunch[100], dinner[100]);
	makanan ( totalHarga, breakfast[100], lunch[100], dinner[100]);
	
	calculateTotalCost (roomCategory, numDays, totalCost);
	displayTotalCost (roomCategory, numDays, totalCost);
}









int ambikNamaNoEmel (string & n, string & e, int & h)
{
	cout << "Name         : ";
	cin >> n;
	cout << "Email        : ";
	cin >> e;
	h = 0;
	
	do
	{
		cout << "Phone number : +60";
		cin >> h;
		if (h>1199999999||h<100000000)
		{
			cout << "Invalid input, please enter your phone number again\n\n";
		}
	}while(h>1199999999||h<100000000);
}

void tunjukNamaNoEmel (string & n, string & e, int & h)
{
	cout << endl << "Customer information :\n\n"<< nama << endl << emel << endl << "+60" << hpNum << endl;
}









int makan (int & totalHarga, int & breakfast, int & lunch, int & dinner)
{
	cout << "\nHow many days for breakfast?\n";
	cin >> totalBreakfast;

	cout << "How many days for Lunch?\n";
	cin >> totalLunch;
	
	cout << "How many days for Dinner?\n";
	cin >> totalDinner;
	cout << endl;

	for (int i=0; i<totalBreakfast; i++)
	{
		cout << "How many person for breakfast day " << i+1 << "?\n";
		cin >> breakfast;
		
		totalHarga = totalHarga + 50*breakfast;
	}
	
	cout << endl;
	

	for (int i=0; i<totalLunch; i++)
	{
		cout << "How many person for lunch day " << i+1 << "?\n";
		cin >> lunch;
		
		totalHarga = totalHarga + 50*lunch;
	}
	
	cout << endl;
	
	for (int i=0; i<totalDinner; i++)
	{
		cout << "How many person for dinner day " << i+1 << "?\n";
		cin >> dinner;
		
		totalHarga = totalHarga + 50*dinner;
	}
	
	cout << endl;
}

void makanan (int & totalHarga, int & breakfast, int & lunch, int & dinner)
{	
	for (int i=0; i<totalBreakfast; i++)
	{
		cout << "Day " << i+1 << " for breakfast : " << breakfast << " person" << endl;
	}
	
	cout << endl;
	
	for (int i=0; i<totalLunch; i++)
	{
		cout << "Day " << i+1 << " for lunch : " << lunch << " person" << endl;
	}
	
	cout << endl;
	
	for (int i=0; i<totalDinner; i++)
	{
		cout << "Day " << i+1 << " for dinner : " << dinner << " person" << endl;
	}
	
	cout << "\nTotal price for meals : RM" << totalHarga;
}















float calculateTotalCost (int & r, int & ND, float & totalCost)
{
	cout << "\n\nRoomtype price list :\n";
	cout << "\n(1) Single Suite        RM399/ day\n(2) King Suite          RM699/ day\n(3) Deluxe Suite        RM999/ day\n";
	cout << "\nChoose your room type                   : ";
	cin >> r;
	if (r>=1&&r<=3)
	{
		cout << "Please enter the number of days to stay : ";
		cin >> ND;
	}
	cout << endl;
	
	if (r==1)
	{
		totalCost= 399*ND;
	}
	else if (r==2)
	{
		totalCost= 699*ND;
	}
	else if (r==3)
	{
		totalCost= 999*ND;
	}
}

void displayTotalCost (int & a, int & b, float & c)
{
	if (a==1)
	{
		cout << "Roomtype     : Single Suite" << endl;
	}
	else if (a==2)
	{
		cout << "Roomtype     : King Suite" << endl;
	}
	else if (a==3)
	{
		cout << "Roomtype     : Deluxe Suite" << endl;
	}
	else 
	{
		cout << "Invalid input\n";
	}
	
	if (b==1)
	{
		cout << "Day to stay  : 1 day" << endl;
	}
	else if (b>1)
	{
		cout << "Days to stay : " << b << " days" << endl;
	}
	else
	{
		if(a<=3&&a>=1)
		cout << "You don't want to stay?";
	}
	
	if (c!=0)
	cout << "\nTotal cost of staying at Teratai Hotel is RM" << c << endl;
}












