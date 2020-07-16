#include"iostream"
using namespace std;

class Point
{
public:
	Point(int val) { x = val; };
	int x;
	int* y;

	void ShowAddress()
	{
		cout << this << endl;
	}

	void Show()
	{
		cout << x << endl;
	}
};

void PassByValue(Point p)
{
	p.ShowAddress();
	
	p.x = 2;
	p.Show();
}

void PassByRef(Point& p)
{
	p.ShowAddress();
	p.x = 2;
	p.Show();
}

void PassByPointer(Point* p)
{
	p->ShowAddress();
	p->x = 2;
	p->Show();
}

void PassByRefPointer(Point*& p)
{
	p = new Point(10);
}

void PassByPointerNew(Point* p)
{
	p = new Point(10);
	//p->x = 10;
}

int main()
{
/*
	Point pt(1);
	//秀出main中pt的address
	pt.ShowAddress();
	
	//秀出外部function中，接pt的Pointer他的address 及其數值
	PassByValue(pt);
	
	//秀出main中pt的數值
	pt.Show();
*/


	/*
	Point point(1);
	point.ShowAddress();
	PassByRef(point);
	//point.ShowAddress();
	point.Show();
	*/

	//我們創造了一個Point物件放在記憶體中，用一個Point型別的指標變數去指著記住這個空間
	Point* point2 = new Point(1);

	point2->ShowAddress();

	PassByPointer(point2);

	//point2->ShowAddress();
	point2->Show();

	/*
	Point* point3 = new Point(1);
	PassByRefPointer(point3);
	point3->Show();
	*/
	system("pause");
	return 0;
}