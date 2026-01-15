#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double Cell_voltage = 0, Cell_Max_voltage = 0, Cell_capacity = 0, Cell_in_series = 0, Cell_in_parallel = 0;
	double Pack_voltage,Pack_Max_voltage, Pack_capacity, Pack_energy;

	cout << "Battery Pack Designer \n";

	// Input the value

	while (Cell_voltage <= 0)
	{
		cout << "Enter the value of Cell Voltage: ";
		cin >> Cell_voltage;
	}


	while (Cell_Max_voltage <= Cell_voltage)
	{
		cout << "Enter the value of Cell Max Voltage: ";
		cin >> Cell_Max_voltage;
	}

	while (Cell_capacity <= 0)
	{
		cout << "Enter the value of Cell Capacity: ";
		cin >> Cell_capacity;
	}

	while (Cell_in_series <= 0)
	{
		cout << "Enter the Number of Cell in Series: ";
		cin >> Cell_in_series;
	}

	while (Cell_in_parallel <= 0)
	{
		cout << "Enter the Number of Cell in Parallel: ";
		cin >> Cell_in_parallel;
	}

	// Calculation

	Pack_voltage = Cell_voltage * Cell_in_series;
	Pack_capacity = Cell_capacity * Cell_in_parallel;
	Pack_energy = Pack_voltage * Pack_capacity;
	Pack_Max_voltage = Cell_Max_voltage * Cell_in_series;

	// Output the result

	cout << "Battery pack voltage: " << Pack_voltage << "V\n";
	cout << "Battery pack capacity: " << Pack_capacity << "Ah\n";
	cout << "Battery pack energy: " << Pack_energy << "Wh\n";
	cout << "Battery pack max voltage: " << Pack_Max_voltage << "V\n";

	if (Pack_Max_voltage < Pack_voltage)
		cout << "\n\nOver Voltage Warning !!!!\n\n";
	else
		cout << "\n\nSafe Voltage\n\n";
	return 0;


}