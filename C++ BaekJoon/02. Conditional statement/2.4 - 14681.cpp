// 2단계 조건문 4번
// 백준 14681번 - 사분면 고르기
// 백준 주소: https://www.acmicpc.net/problem/14681

// 2회차
#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x;
    cin >> y;

    if( x > 0 && y > 0){
        cout << "1" << endl;
    }else if( x < 0 && y > 0){
        cout << "2" << endl;
    }else if( x < 0 && y < 0){
        cout << "3" << endl;
    }else if( x > 0 && y < 0){
        cout << "4" << endl;
    }

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int x, y;
//     cin >> x >> y;
    
//     if(x>0 && y>0){
//         cout << "1" << endl;
//     }else if(x<0 && y>0){
//         cout << "2" << endl;
//     }else if(x<0 && y<0){
//         cout << "3" << endl;
//     }else if(x>0 && y<0){
//         cout << "4" << endl;
//     }
    
//     return 0;
// }