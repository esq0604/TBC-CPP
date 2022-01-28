#pragma once
//중복으로 ㅇ인클루드가 되었을때 충돌을 막아줌 -헤더가드
namespace Constants
{
	//고정된 수는 반복되어 사용된다~ 

	//선언만하고 같은다른 cpp파일로 통해 초기화를 하니 메모리 주소 같아짐.
	//헤더파일에 값을 초기화 하고 쓰는것은  메모리를 공유하는것이 아니라 
	//사본으로 복사를 받았을뿐인것이다.
	extern const double pi;//(3.141592);
		extern const double gravity;//(9.8);
	//..
}
