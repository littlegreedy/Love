/*
	Writing code with C++

	author: littleGreedy
	description: A game that leads to the Antarctica love place
	target: The student majors in computer for review
*/


#include<iostream>
#include<cstring>
#include <cstdlib> 
#include <cmath> 
#include<windows.h>
#include<cstdio>
#include<conio.h>

#define HeSays      cout <<
#define ForeverLove <<endl

#define Myheart     char
#define eternity    const
#define like         +  
#define my          public 
#define Princess    class 

#define IamYours    void
#define IadoreYou   string

#define YouCompleteMe   int
#define YouareMyAngel   Sleep

#define myFriend     friend
#define YourSweetWords   return

using namespace std;

//����һ����
Princess Boyfriend {
my:

	Boyfriend(IadoreYou name, YouCompleteMe age, IadoreYou Mood) {
		Name = name;
		Age = age;
		MoodColor = Mood;
	}
	~Boyfriend() {}

	//��ʾ��ǰ״̬
	IadoreYou GetName() { YourSweetWords Name; }
	YouCompleteMe GetAge() { YourSweetWords Age; }
	IadoreYou GetMood() { YourSweetWords MoodColor; }
	IamYours showNow() { HeSays Name << " " << Age << " " << MoodColor ForeverLove; }

	//�޸�״̬ 
	IamYours SetName(eternity IadoreYou& name) { Name = name; }
	IamYours SetMood(eternity IadoreYou& Mood) { MoodColor = Mood; }
	IamYours SetAge(YouCompleteMe age) { Age = age; }

    //��������
	IadoreYou Name;
	YouCompleteMe Age;
	IadoreYou MoodColor;
};
//������
Princess HH :my Boyfriend {
my:
	HH(IadoreYou name = "Hh", YouCompleteMe age = 19, IadoreYou Mood = "white") :Boyfriend(name, age, Mood) {}
	~HH() {}

	//  �����͹��к��� 
	YouCompleteMe warning() {
		YourSweetWords 1;
	}
	YouCompleteMe MeetEachOther() {
		YourSweetWords 2;
	}
	YouCompleteMe PetNameOfW() {
		YourSweetWords 3;
	}
	IamYours showNow() {
		Boyfriend::showNow();
	}

	//ȡ����
	YouCompleteMe PetNameOfW(eternity IadoreYou& name) {
		Boyfriend::SetName(name);
		YourSweetWords 4;
	}
	YouCompleteMe heart() {
		YourSweetWords 5;
	}
	IadoreYou LoverName()eternity {
		YourSweetWords Name;
	}

	//��ϰ��д���أ�   sqrt(c1.Age + c2.Age) / 3ΪϹ���ֵ
	myFriend HH operator +(eternity HH& c1, eternity HH& c2) {
		YourSweetWords HH("Ch", sqrt(c1.Age + c2.Age) / 3);
	}
	myFriend ostream& operator<<(ostream& out, eternity HH& c3) {
		out ForeverLove;
		out << "������19�������ת�ۼ䵽��25��,��ô���õ��껪��" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "С̰�����Է��ʣ�������Ҫ���к�����Ů������" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "��һ�̣�����˲�������㣬�������۾�ֱ���С̰�ģ������Ǳ��ʶҲ̫�����ˣ����Ǻ��Ӷ�" << c3.Age << "���ˡ�����" ForeverLove ForeverLove;
		YouareMyAngel(75 * 100);
		out << "Oops��What is his or her name��������ع���С̰������ʶ���ʵ���" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "Hh �� ��һ�Ե���ͬѧ LaoWang Ц��Ц��Լ��ͬ�������" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "ta�� " << c3.Name ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "��˵�ţ�һ����������������˸��" ForeverLove ForeverLove;
		YouareMyAngel(15 * 1000);
		YourSweetWords out;
	}

	IamYours yourName() {
		IadoreYou petOfname;
		cout ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays "...ʱ�������죬��ʶ�������ˣ����˽�ܶ��й������Ķ���" ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "���ڵ�����������ʲô��~���������Լ�ϲ���ĳƺ���ʹ�ü������룬����������س���" ForeverLove;
		cin >> petOfname;
		PetNameOfW(petOfname);
		YouareMyAngel(1 * 1000);
		HeSays "�㿪ʼ������" << GetName() ForeverLove;
	}

	IamYours firstImpressions() {
		cout ForeverLove;
		HeSays "�ţ�������ֽ�ʲô����" ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays GetName() ForeverLove;
		cout ForeverLove;
	}
};

//��ϰ��̳� ���ڲ����ͺ������Ƴ̶ȼ��ߣ�����������϶�Ϊһ��
Princess WyW :my Boyfriend {
my:
	WyW(IadoreYou name = "Wyw", YouCompleteMe age = 19, IadoreYou Mood = "white") :Boyfriend(name, age, Mood) {}
	~WyW() {}

	//  �����͹��к��� 
	YouCompleteMe warning() {
		YourSweetWords 1;
	}
	YouCompleteMe MeetEachOther() {
		YourSweetWords 2;
	}
	YouCompleteMe PetNameOfW() {
		YourSweetWords 3;
	}
	IamYours showNow() {
		Boyfriend::showNow();
	}

	YouCompleteMe PetNameOfW(eternity IadoreYou& name) {
		Boyfriend::SetName(name);
		YourSweetWords 4;
	}
	YouCompleteMe heart() {
		YourSweetWords 5;
	}
	IadoreYou LoverName()eternity {
		YourSweetWords Name;
	}
	myFriend WyW operator +(eternity WyW& c1, eternity WyW& c2) {
		YourSweetWords WyW("Dw", sqrt(c1.Age + c2.Age) / 3);
	}
	myFriend ostream& operator<<(ostream& out, eternity WyW& c3) {
		out ForeverLove;
		out << "������19�������ת�ۼ䵽��25��,��ô���õ��껪��" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "С̰�����Է��ʣ�������Ҫ���к�����Ů������" ForeverLove ForeverLove;
		YouareMyAngel(5 * 1000);
		out << "��һ�̣�����˲�������㣬�������۾�ֱ���С̰�ģ������Ǳ��ʶҲ̫�����ˣ����Ǻ��Ӷ�" << c3.Age << "���ˡ�����" ForeverLove ForeverLove;
		YouareMyAngel(75 * 100);
		out << "Oops��What is his or her name��������ع���С̰������ʶ���ʵ���" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << " LaoWang ����һ�Ե���ͬѧ Hh Ц��Ц��Լ��ͬ�������" ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "ta�� " << c3.Name ForeverLove ForeverLove;
		YouareMyAngel(65 * 100);
		out << "��˵�ţ�һ����������������˸��" ForeverLove ForeverLove;
		YouareMyAngel(15 * 1000);
		YourSweetWords out;
	}

	IamYours yourName() {
		IadoreYou petOfname;
		cout ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays "...ʱ�������죬��ʶ�������ˣ����˽�ܶ��й������Ķ���" ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "���ڵ�����������ʲô��~���������Լ�ϲ���ĳƺ���ʹ�ü������룬����������س���" ForeverLove;
		cin >> petOfname;
		PetNameOfW(petOfname);
		YouareMyAngel(1 * 1000);
		HeSays "�㿪ʼ������" << GetName() ForeverLove;
	}

	IamYours firstImpressions() {
		cout ForeverLove;
		HeSays "�ţ�������ֽ�ʲô����" ForeverLove;
		YouareMyAngel(3 * 1000);
		HeSays GetName() ForeverLove;
		cout ForeverLove;
	}
};

//�Թ���Ϸ
IamYours Maze()
{
	Myheart a[50][50] = { "#########",
					"#O #    #",
					"# ##  # #",
					"#  # ##  ",
					"##    # #",
					"#########",
	};
	YouCompleteMe i, x, y, p, q;
	Myheart ch;

	x = 1; y = 1; p = 3; q = 8;
	for (i = 0; i <= 5; i++)
		puts(a[i]);
	while (x != p || y != q) {

		ch = _getch();
		if (ch == 's' || ch == 'S') {
			if (a[x + 1][y] != '#') {
				a[x][y] = ' ';
				x++;
				a[x][y] = 'O';
			}
		}
		if (ch == 'w' || ch == 'W') {
			if (a[x - 1][y] != '#') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'a' || ch == 'A') {
			if (a[x][y - 1] != '#') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'O';
			}
		}
		if (ch == 'd' || ch == 'D') {
			if (a[x][y + 1] != '#') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'O';
			}
		}
		system("cls");
		for (i = 0; i <= 5; i++)
			puts(a[i]);
	}

}

//�¼�����
IamYours Judge(YouCompleteMe n)
{
	YouCompleteMe coordinate = 20;

	Myheart love[100] = "�ü��̵�W���ϣ� S���£� A���� D���ң�����СԲ��׼���������Ǿ����̣�                     ";

	Myheart choose;
	Myheart h[50] = "please hear my heart                     ";

	float x, y;
	IadoreYou s = "I love you!";
	YouCompleteMe l = s.length();

	Myheart lov[50] = "���Ժ�ͽ���Ĵ�����^_^                  ";

	switch (n) {
	case 1:
		YouareMyAngel(3 * 1000);
		cout ForeverLove;
		HeSays "<�룡̰���㷨���棡����>" ForeverLove;
		for (YouCompleteMe i = 0; i < 6; i++) {
			HeSays "��";
			YouareMyAngel(1 * 600);
		}
		cout ForeverLove;
		HeSays "�ŵ�ģ��..." ForeverLove;
		YouareMyAngel(2 * 1000);
		break;

	case 2:
		HeSays "���¿�ʼǰ��������Թ�����Ϸ�ɡ�" ForeverLove;
		YouareMyAngel(15 * 100);

		//��ʱ��ӡ����
		for (YouCompleteMe m = 20; love[m]; m++) {
			HeSays love[m - 20];
			YouareMyAngel(8 * 10);
		}
		cout ForeverLove;
		YouareMyAngel(3 * 1000);

		//�����Թ���Ϸ
		Maze();

		system("cls");

		HeSays "�����кܶ���·�����߹�������·�ڡ�ֱ����һ�죬������һ�������λ��......" ForeverLove ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "<�һᣬ���μ���>" ForeverLove;
		YouareMyAngel(4 * 1000);
		HeSays "���������к���˵������������ A ���� B��" ForeverLove ForeverLove;
		HeSays "A:��ó��μ��棬��֪����˵ʲô���������ȽӸ��ǰɡ�" ForeverLove;
		HeSays "B:��ã����μ��档" ForeverLove;
		cout ForeverLove;

		//������֮����Ȼ��ѡ����
		do {
			choose = _getch();
			if (choose == 'A' || choose == 'a') {
				HeSays "��֪������ôɧ�����򶼱���ɧ��������" ForeverLove;
				YouareMyAngel(8 * 1000);
				exit(0);
			}
			else if (choose == 'B' || choose == 'b');
			else  	choose = 'N';
		} while (choose == 'N');
		break;

	case 3:
		YouareMyAngel(3 * 1000);
		cout ForeverLove;
		HeSays "�棬�ƺ�ʲô���أ�" ForeverLove;
		for (YouCompleteMe i = 0; i < 6; i++) {
			HeSays "?  ";
			YouareMyAngel(1 * 600);
		}
		cout ForeverLove;

		for (YouCompleteMe m = 8; lov[m]; m++) {
			HeSays lov[m - 8];
			YouareMyAngel(3 * 100);
		}
		YouareMyAngel(2 * 1000);
		cout ForeverLove;
		break;

	case 4:
		HeSays "4" ForeverLove;
		for (YouCompleteMe i = 0; i < 6; i++) {
			HeSays "��";
			YouareMyAngel(1 * 1000);
		}
		YouareMyAngel(4 * 1000);
		cout ForeverLove;
		break;

	case 5:
	//����ض���Ч��
		system("cls");
		HeSays " O" ForeverLove;
		HeSays "<H>" ForeverLove;
		HeSays "I I" ForeverLove;
		YouareMyAngel(1 * 1000);
		system("cls");
		HeSays "    |\\" ForeverLove;
		HeSays "    |/" ForeverLove;
		YouareMyAngel(1 * 1000);
		system("cls");
		for (YouCompleteMe i = 4; i < 22; i++) {
			YouCompleteMe j = i;
			cout ForeverLove;
			while (j) {
				HeSays "  ";
				j--;
			}
			HeSays "-->";
			YouareMyAngel(1 * 180);
			system("cls");
		}
		YouareMyAngel(1 * 200);

		//����
		for (YouCompleteMe j = 0; j < 6; j++) {
			coordinate = 20;
			while (coordinate) {
				HeSays "  ";
				coordinate--;
			}
			if (j == 0 || j == 2)
				HeSays "         - " ForeverLove;
			else if (j == 3) HeSays "this is a pure love." ForeverLove;
			else if (j == 4) HeSays "pure love is a drug." ForeverLove;
			else if (j == 5)
				for (YouCompleteMe m = 20; h[m]; m++) {
					HeSays h[m - 20];
					YouareMyAngel(1 * 100);
				}
			else HeSays "        ---" ForeverLove;
		}
		YouareMyAngel(6 * 1000);
		system("cls");

		//�������
		for (y = 1.3f; y >= -1.1f; y -= 0.06f)
		{
			YouCompleteMe t = 0;
			for (x = -1.1f; x <= 1.1f; x += 0.025f)
			{
				double heart = x * x + (5.0 * y / 4.0 - sqrt(abs(x))) * (5.0 * y / 4.0 - sqrt(abs(x)));
				if (heart <= 1) {
					HeSays s[t];
					YouareMyAngel(1 * 10);
					t = (t + 1) % l;
				}
				else HeSays " ";
			}
			cout ForeverLove;
		}
		HeSays "Thanks for meeting by chance." ForeverLove;
		for (YouCompleteMe k = 0; k <= 12; k++) {
			HeSays " ";
			YouareMyAngel(2 * 300);
		}
		HeSays "End,but never end.";
		YouareMyAngel(10 * 1000);
		break;
	}

}

YouCompleteMe main()
{
	//ѡ���ж�
	YouCompleteMe choos;

	//����
	YouCompleteMe mi;

	Myheart* Name = new Myheart[12];

	HH Prince("Hh", 19, "White"), Hh, C; //��С�Ƴ�ʼ��һ������-- 
	
	C = Prince like Hh;

	WyW Prince_("Wyw", 19, "White"), Wyw, C2; //��С����ʼ��һ������--

	C2 = Prince_ like Wyw;

	
	/*����ϵͳ������ɣ�*/
	//Prince_ang.SetMood("yellow");
	//HeSaysPrince_ang.GetMood();
	//Prince_ang.SetName("Name");
	//HeSays"����SetName(Name)����"<<endl;

	HeSays "*�ؼ����������ѡ�����˹�*" ForeverLove;
	HeSays "��������1 ����������2�� ��������3�� ����󰴻س�" ForeverLove;
	cin >> choos;
	if (choos == 1) {

		Judge(Prince.MeetEachOther());

		Prince.firstImpressions();

		Judge(Prince.PetNameOfW());

		Prince.yourName();

		Judge(Prince.warning());

		Judge(Prince.heart());

		HeSays C;

		//����ͨ�����������ķ���
		HeSays "Hh����������Լ������" << Prince.LoverName() << "��Ц�ã�������۵ĺ��ӡ�" ForeverLove;
	}
	else if (choos == 2) {

		Judge(Prince_.MeetEachOther());

		Prince_.firstImpressions();

		Judge(Prince_.PetNameOfW());

		Prince_.yourName();

		Judge(Prince_.warning());

		Judge(Prince_.heart());

		HeSays C2;

		HeSays "Yw����������Լ������" << Prince_.LoverName() << "��Ц�ã�������۵ĺ��ӡ�" ForeverLove;
	}

	//û����ȷ����������
	else if (choos == 3) {
		HeSays "����������:";
		cin >> mi;
		HeSays "������󣡳����˳���" ForeverLove;
	}
	else   HeSays"Waring�����˳�������������";

	YouareMyAngel(10 * 1000);

	YourSweetWords 0;
}