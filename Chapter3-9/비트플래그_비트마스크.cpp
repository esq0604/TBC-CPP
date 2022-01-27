#include<iostream>
#include<bitset>
int main()
{
	using namespace std;
	/* 
	아이템 갯수만큼 bool flag를 만드는 방법도 있다. 
	하지만 아이템 1을 갖고있나 안갖고있나->2비트로 생각  true false를 8개로 표현
	1바이트 변수 통해 아이템 8개를 갖고있나 안갖고있나 정도 생각을 해볼 수 있게된다. 
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
	//아이템이 많아지면 아이템 플래그, 불값이 점점많아짐
	//이벤트를 함수를 통해 발생시키려하면 파라미터가 점점늘어남.
	//array를 보다 compact하게 쓰는방법임 . 클래스나 구조체로 묶는방법도 있지만
	//비트플래그방식으로 귀결된다. 속도도 더 빠르다는 장점이있다.
	//invokeEvent(item1_flag, item2_flag, item3_flag, ...);


	//아이템을 갖고있는지의 유무는 각 비트를 사용해서 . 사용함.
	//원래같았으면 bool타입 8개로 해결했지만 1바이트 변수 unsigned char 하나를 통해 해결함. 

	//left shift 2의제곱수로 이동 - 비트단위로 이동 옵션으로 설정 .
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


	//xor사용 
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		//^->xor 2줄을 한줄로 줄일수 있다 .
		items_flag ^= (opt2|opt1);
		

	}
	cout << bitset<8>(items_flag) << endl;

	//rgb color table 참고
	//16진수는 2^4, 씩  4번. 32비트. 0000 0000 0000 0000 -> 0xFF0000은 FF앞에 00이 생략된것. 
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
	//블루 마스크부분만 추출함. 
	cout << "blue " << bitset<8>(blue) <<" "<<int(blue) <<endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "red " << bitset<8>(red) << " " << int(red) << endl;

	
	//unsigned char red, green, blue;

	return 0;
}