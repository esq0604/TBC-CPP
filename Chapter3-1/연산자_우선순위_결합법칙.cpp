#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//다른 연산자들이 들어있음. 컴파일러는 수식이 들어오면 어느쪽을 먼저 계산할것인지.
	//결정을한다 결정하는 방법은 -자료구조 
	//괄호가 우선순위.
	int x =(4 + 2) * 3;
	int x1 = 4 + (2 * 3);

	//곱하기와 나누기는 우선순위가 같음. 우선순위가 같을때
	//결정하는것이 결합법칙 -associated의 우선순위 -Precedence가 어떻게 될까 - 찾아보면댐
	//위키피디아 ->Operators in C and C++ , left to rigt
	//사람이 봤을땐 어느순서건 3*4/2 연산이 같을 수 있지만
	//컴퓨터연산에서는 다른경우가 있을수도있음.
	int x3 = 3 * 4 / 2;


	// Unary(왼쪽엔없고 오른쪽에오는) P,M  -->right to left 
	//대입연산자 또한 오른쪽에 셰산이 끝난 뒤 왼쪽으로 옮기는 것 .
	//생각했을때 애매할것같다면 ()을 통해 명확하게 표현하면된다.
	int y = (1 - 2) + -3;
	
	
	//^은 수학에서는 제곱을 표현하지만  c에서는 bitwiseXOR이다-exclusive or
	//제곱표현 cmath라이브러리 사용
	int y2 = std::pow(2, 3);
	cout << y2 << endl;

	return 0;
}