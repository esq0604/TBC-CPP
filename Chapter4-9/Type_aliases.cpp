#include<iostream>
#include<vector>
#include<cstdint>
int main()
{
	using namespace std;
	//사실상 double이나 distance_t 나 섞여서 사용할수있다. 코드상에선.
	//여기서의 의도는 distance_t를 쓸대는 double을 거리라는 개념으로 쓸것이다.
	//라고 주석 겸 메모 겸 사용하는것이다.
	typedef double distance_t; 

	//고정너비변수
	//t가 있는데 새로운 자료형을 정의한게 아니고 있는것들중 상황에 적합한것으로
	//typedef을 통해 가명을 만들어준것임. 
	std::int8_t i(97);



	//컴파일러 입장에선 둘이 똑같음.
	//double이고 distance이다. 라고표현하는방법
	double		my_distance;

	//home에서 work까지 distance다. 라고 표현하는방법. distacne는 double로 쓰겠다~. 라고표현
	//만약 거리로 쓰이는 변수를 float로 바꿔야한다면거리로 쓰이는 것만 바꿔주는것은 힘들다
	//typedef에서 double을 float로만 바꿔주면 된다.
	distance_t	 home2work;
	distance_t	home2scholl;

	//std::vector<std::pair<std::string, int>> pairlist;
	//일종의 자료형으로 보면됨. string,int 페어가 배열처럼 나열되어있는~
	//복잡한자료형이 있다고 생각하면된다.
	//이러한 경우 보기에도 안좋고 불편할것이다.
	typedef vector<pair<string, int>> pairlist_t;
	
	//vector<pair<string, int>> pairlist1;
	//vector<pair<string, int>> pairlist2;
	pairlist_t pairlist1;
	pairlist_t pairlist2;

	//최근에는 using을 사용하는 방법도 있음.
	//마치 대입을하는것과 같지만 컴파일러에게 얘를 표현하기 위해 이러한 이름을쓰겠다
	//라고 하는것.
	using pairlist_t2 = vector<pair<string, int>>;


	return 0;
}