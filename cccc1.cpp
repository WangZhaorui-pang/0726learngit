/*#include<iostream >
using namespace std;
int main()
{
	int i=1;
	do
	{
		cout << "��ǰ��ֵ��" << i << endl;
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
		cout << "��ǰ��ֵ��" << i << endl;
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
		cout << "��ǰ��ֵ��" << i << endl;
		
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
	cout << "������1-10�������ҵ���������֣�";
	do
	{
		cin >> n;
		if (n < Number)
		{
			cout << "���ֵ��ˣ���������һ�Σ�";

		}
		else if (n> Number)
		{
			cout << "���ָ��ˣ���������һ�Σ�";

		}
		else
		{
			cout << "�����������ȷ��" << Number << endl;
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
		cout << "���ܴ��ļ�" << endl;
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
		cout << "�ļ��Ѿ�����" << endl;
	else if (inFile.fail())
		cout << "�ļ���ȡʧ��" << endl;
	else
		cout << "������δ֪ԭ�����ֹ" << endl;
	if (count == 0)
		cout << "û�����ݴ���" << endl;
	else
	{
		cout << "�ܹ�" << count << "�����ݴ���" << endl;
		cout << "�����ܺ�" << sum << endl;
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
	ofs.open(filename, ios::out);//ֻдģʽ
	for (int i = 1; i < 4; i++)
		ofs << i << " " << endl;//д������
	ofs.close();//�ر��ļ�
	ofs.clear();//����
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
