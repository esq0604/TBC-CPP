#include<iostream>
#include<bitset>
int main()
{
	using namespace std;
	/* 
	������ ������ŭ bool flag�� ����� ����� �ִ�. 
	������ ������ 1�� �����ֳ� �Ȱ����ֳ�->2��Ʈ�� ����  true false�� 8���� ǥ��
	1����Ʈ ���� ���� ������ 8���� �����ֳ� �Ȱ����ֳ� ���� ������ �غ� �� �ְԵȴ�. 
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	//event 
	item1_flag = true;

	//die item2 los
	item2_flag = false;

	if (item3_flag == true)
	{
		//event
	}

	if (item3_flag == true)
	{
		item3_flag = false;
		item4_flag = true;
	}
	*/
	//�������� �������� ������ �÷���, �Ұ��� ����������
	//�̺�Ʈ�� �Լ��� ���� �߻���Ű���ϸ� �Ķ���Ͱ� �����þ.
	//array�� ���� compact�ϰ� ���¹���� . Ŭ������ ����ü�� ���¹���� ������
	//��Ʈ�÷��׹������ �Ͱ�ȴ�. �ӵ��� �� �����ٴ� �������ִ�.
	//invokeEvent(item1_flag, item2_flag, item3_flag, ...);


	//�������� �����ִ����� ������ �� ��Ʈ�� ����ؼ� . �����.
	//������������ boolŸ�� 8���� �ذ������� 1����Ʈ ���� unsigned char �ϳ��� ���� �ذ���. 

	//left shift 2���������� �̵� - ��Ʈ������ �̵� �ɼ����� ���� .
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;


	unsigned char items_flag = 0;
	cout <<"No item "<< bitset<8>(items_flag) << endl;

	//item0 on 
	items_flag |= opt0;
	cout<<"Item0 obtained " << bitset<8>(items_flag) << endl;

	//item3 on
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	//has item1?
	if (items_flag&opt1) {cout << "Has item1 " << endl;}
	else
		cout << "Not Has item1 " << endl;


	if (items_flag&opt0) {cout << "Has item0 " << endl;}
	else
		cout << "Not Has item0 " << endl;

	//obtain item 2,3

	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;


	//xor��� 
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		//^->xor 2���� ���ٷ� ���ϼ� �ִ� .
		items_flag ^= (opt2|opt1);
		

	}
	cout << bitset<8>(items_flag) << endl;

	//rgb color table ����
	//16������ 2^4, ��  4��. 32��Ʈ. 0000 0000 0000 0000 -> 0xFF0000�� FF�տ� 00�� �����Ȱ�. 
	const unsigned int red_mask		= 0xFF0000;
	const unsigned int green_mask	= 0x00FF00;
	const unsigned int blue_mask	= 0x0000FF;


	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;


	unsigned int pixel_color = 0xDDA520;	

	cout << std::bitset<32>(pixel_color) << endl;

	unsigned char blue = pixel_color & blue_mask;
	unsigned char green = (pixel_color & green_mask)>>8;
	unsigned char red = (pixel_color & red_mask)>>16;
	//��� ����ũ�κи� ������. 
	cout << "blue " << bitset<8>(blue) <<" "<<int(blue) <<endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "red " << bitset<8>(red) << " " << int(red) << endl;

	
	//unsigned char red, green, blue;

	return 0;
}