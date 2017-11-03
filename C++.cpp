#include<iostream>
using namespace std;
class list
{
private:
	int n, m;
	int **pointer;
public:
	list();
	list(int n, int m);
	void readlist();
};
list :: list()
{
	n = 0;
	m = 0;
};
list :: list(int n, int m)
{
	this-> n = n;
	this-> m = m;
	pointer = new int *[n];
	cout << "Enter the elements of the array" << endl;
	for (int i = 0 ; i < n ; i++)
		for (int j = 0; j < m ; j++)
		{
			cin >> **(pointer[i][j]);
		}
}
void list :: readlist()
{
	cout << "\nn = " << n <<endl;
	cout << "\nm = " << m <<endl;
	cout << "Enter the elements of the array" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cout << pointer[i][j] << ", ";
		}
}
int main()
{
	int n, m;
	cout << "Enter n then m" << endl;
	cin >> n >> m;
	list list1(n, m);
	list1.readlist();
	system("pause");
	return 0;
}
