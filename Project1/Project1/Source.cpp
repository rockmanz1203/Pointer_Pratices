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
	//�q�Xmain��pt��address
	pt.ShowAddress();
	
	//�q�X�~��function���A��pt��Pointer�L��address �Ψ�ƭ�
	PassByValue(pt);
	
	//�q�Xmain��pt���ƭ�
	pt.Show();
*/


	/*
	Point point(1);
	point.ShowAddress();
	PassByRef(point);
	//point.ShowAddress();
	point.Show();
	*/

	//�ڭ̳гy�F�@��Point�����b�O���餤�A�Τ@��Point���O�������ܼƥh���۰O��o�ӪŶ�
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