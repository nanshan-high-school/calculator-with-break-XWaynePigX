#include <iostream>
using namespace std;

int main() {
  cout << "請輸入算式：";
  char v1;
  int num=0;
  int total=0;
  while(true){
    cin >> v1;
    if(v1 != '='){
      cin >> num;
    }
    if (v1=='+'){
      total=total+num;
    }else if (v1=='-'){
      total=total-num;

    }else if (v1=='*'){
      total=total*num;

    }else if (v1=='/'){
      total=total/num;

    }else if (v1=='='){
      cout << total;
      break;
    }else{
      cout << "出現錯誤！！！！";
    }
  }
}
