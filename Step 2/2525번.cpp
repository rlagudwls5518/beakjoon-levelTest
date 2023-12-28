#include <iostream>
using namespace std;
//오븐시계
//필요한 시간이 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.
//1.  현재시간+조리시간<1시간 
//2. 현재시간+조리시간>1시간 -> 시 변화, 
//2-1 위 상황에서 23시가 넘어가는 경우
//2-2.  현재시간+조리시간>2,3,4~시간일떄 

int main(){
    int H = 0;//시간
    int M = 0;//분
    int T = 0;//조리시간
    int extraTime = 0;//추가되는 시간
    cin >> H >> M>>T;

    //1번경우
    if (M + T < 60){
        M = M + T;
    }
    //2번경우
    else if (M + T >= 60){
        extraTime = (M + T) / 60;
        M = (M + T) % 60;

        if (H + extraTime >= 24)
        {
            H = (H + extraTime) % 24;// 나머지로 24이하일때는 그냥 출력 위일때는 나머지로 출력!!
        }
        else
        {
            H = H + extraTime;
        }
     }
    cout << H << " " << M;
}

