/*#include<iostream >
using namespace std;
int main()
{
	int i=1;
	do
	{
		cout << "当前的值：" << i << endl;
		i++;
	} while (i <= 3);
	return 0;
}
 */

/*#include<iostream >
using namespace std;
int main()
{
	int i = 1;
	while (i <= 3)
	{
		cout << "当前的值：" << i << endl;
		i++;
	}
	return 0;
}*/

/*#include<iostream >
using namespace std;
int main()
{
	int i ;
	for (i = 1; i <= 3;i++)
	{
		cout << "当前的值：" << i << endl;
		
	}
	return 0;
}*/


/*#include<iostream >
using namespace std;
int main()
{
	int i=1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++)
		{
			cout <<  j <<" ";
		}
		cout << endl;
	}
	return 0;
}*/


/*#include<iostream >
using namespace std;
#define Number 6
//const int Number = 6;
int main()
{
	int n;
	cout << "请输入1-10的整数找到猜想的数字：";
	do
	{
		cin >> n;
		if (n < Number)
		{
			cout << "数字低了，请再输入一次：";

		}
		else if (n> Number)
		{
			cout << "数字高了，请再输入一次：";

		}
		else
		{
			cout << "输入的数字正确：" << Number << endl;
		}
	} while (n != Number);
}*/



/*#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream inFile;
	inFile.open("sum.txt");
	if (!inFile.is_open())
	{
		cout << "不能打开文件" << endl;
		exit(EXIT_FAILURE);

	}
	double value;
	double sum = 0;
	int count = 0;
	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;

	}
	if (inFile.eof())
		cout << "文件已经读完" << endl;
	else if (inFile.fail())
		cout << "文件读取失败" << endl;
	else
		cout << "输入因未知原因而终止" << endl;
	if (count == 0)
		cout << "没有数据处理" << endl;
	else
	{
		cout << "总共" << count << "个数据处理" << endl;
		cout << "数据总和" << sum << endl;
	}
	return 0;
}*/



/*#include<iostream>
#include<fstream>//file I/O support

using namespace std;
int main()
{
	ofstream ofs;

	char filename[16] = "writer.txt";
	int a = 1;
	ofs.open(filename, ios::out);//只写模式
	for (int i = 1; i < 4; i++)
		ofs << i << " " << endl;//写入数据
	ofs.close();//关闭文件
	ofs.clear();//清理
	return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i <<"="<< j*i<<" ";
		}
		cout << endl;
	}
	return 0;
} 
