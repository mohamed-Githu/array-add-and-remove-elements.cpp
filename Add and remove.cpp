#include <iostream>
#include <string>

using namespace std;

void print (int arr [],int);

int main(int argc, char** argv) {
	
	int arr [50], size, num, index;
	char ans , anse = '1';
	
	cout << "Size = ";
	cin >> size;
	
	cout << "Scrivi gli elementi :\n";
	for (int x = 0 ; x < size ; x ++)
	{
		cout << x + 1 << ") " ;
		cin >> arr [x] ;
	}
	
	while (anse == '1')
	{
		cout << "\n\n1 - eleminare \n2 - aggiungere \n3 - Esci\n\nScegli : ";
		cin >> ans;
		cout << "\n\n";
	
		switch (ans) {
			case '1':
				cout << "Elemento da eleminare : ";
				cin >> index;
				for (int x = index - 1; x < size - 1; x ++)
				{
					arr [x] = arr [x + 1];
				}
			
				cout << "\n\nLa nuova tabella :\n\n";
	
				for (int x = 0 ; x < size - 1; x ++)
				{
					cout << x + 1 << ") " << arr [x] << endl;
				}
				cout << "\n\nVuoi continuare ?\n\n1) Si`\nTap any other key to quit\n\n";
				cin >> anse;
				break;
			case '2':
				cout << "Dove vuoi aggiugerlo : ";
				cin >> index;
				cout << "Il nuovo valore = ";
				cin >> num;
				for (int x = size ; x >= index; x --)
				{
					arr [x] = arr [x - 1];
				}
				arr [index - 1] = num;
				
				cout << "\n\nLa nuova tabella :\n\n";
				
				size ++;
				
				for (int x = 0 ; x < size; x ++)
					{
					cout << x + 1 << ") " << arr [x] << endl;
				}
				cout << "\n\nVuoi continuare ?\n\n1) Si`\nTap any other key to quit\n\n";
				cin >> anse;
				break;
			default:
				anse = '2';
				break;
		}
	}
	
	return 0;
}

void print (int arr [],int size) {
	
}
