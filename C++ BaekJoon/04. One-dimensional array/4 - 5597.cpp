// 4단계 1차원 배열
// 백준 5597번 - 과제 안 내신 분...?
// 백준 주소: https://www.acmicpc.net/problem/5597






































// #include<iostream>
// using namespace std;

// int main(){

//     int n = 0, arr[31] = {0};
//     // 가능하면 변수는 항상 초기화 해주는게 좋다
//     // 배열은 전역 변수일때는 자동으로 0으로 초기화 된다.
//     // 지역 변수는 0으로 초기화 시켜줘야 아래 if문에서 0인 값을 찾을 수 있다..
//     // 크기가 31인 이유는 인덱스가 0부터 시작하는데
//     // 출석번호에 0번은 존재하지 않기 때문에 크기를 31로 잡아서
//     // 인덱스가 0 ~ 30인 배열을 만든다.

//     for(int i = 0; i < 28; i++){
//         cin >> n;
//         arr[n] = 1;
//     }
//     // 입력 못 받은 배열의 데이터 값은 0
//     // -> 데이터 값이 0인 배열 = 제출 안한 학생

//     for(int i = 1; i <= 30; i++){
//         if(arr[i] == 0){
//             cout << i << endl;
//         }
//     }
//     return 0;
// }