#include <iostream>
#include <algorithm>
using namespace std;
bool t(double x1, double y1, double x2, double y2)
{
	if (x1 > x2)
	{
		if (y1 > y2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (y1 > y2)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main() {
	double x1, x2, y1, y2,x3,x4,y3,y4,k1,k2,c1,c2,ans;
	cin >> x1 >> y1>>x2>>y2;
	cin >> x3 >> y3 >> x4 >> y4;
	
	if (t(x1, y1, x2, y2))
	{
		k1 = abs(y1 - y2)/abs(x1 - x2);
	}
	else
	{
		k1 = -(abs(y1 - y2) /abs(x1 - x2));
	}

	if (t(x3, y3, x4, y4))
	{
		k2 = abs(y3 - y4)/abs(x3 - x4);
	}
	else
	{
		k2 = -(abs(y3 - y4)/abs(x3 - x4));
	}

	if (k1 == k2)
	{
		cout << "match or parallel";
	}
	else
	{
		c1 = y1 - x1 * k1;
		c2 = y3 - x3 * k2;
		ans = (c2 - c1);
		ans = ans / (k1 - k2);
		cout << ans<<' '<<k1 * ans + c1;
	}
}