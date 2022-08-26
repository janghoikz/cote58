#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string number, int k) {
    vector<char> abc;
    for (int i = 0; i < number.size(); i++)
    {
        abc.push_back(number[i]);
    }
    char temp = '0';
    int count = 0; 
    for (int i = 0; i < abc.size(); i++)
    {
        if (count == k)
        {
            break;
        }
        //끝까지 가면 템프를올리고 포문 초기화
        if (i + 1 == abc.size())
        {
            i = 0;
            temp++;
        }
        if (temp == abc[i])
        {
            count++;
            i - 1;
            abc.erase(abc.begin() + i);
        }
        
    }
    string answer(abc.begin(), abc.end());
    cout << answer << endl;
    return answer;
}

int main()
{
    string number = "1924";
    int k = 2;
    solution(number,k);
}