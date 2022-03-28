#include <iostream>
using namespace std;

class Solution {
    int num;
public:
    Solution(int x){
        num=x;
    }
    int reverse() {
        cout<<"Reversing the number";
        int temp=num;
        int rnum=0;
        while(temp>0)
        {
            rnum=rnum*10 + temp%10;
            temp/=10;

        }
        num=rnum;

        return num;
    }
    public:
    void print() {
        cout<<"Number value is "<<num<<endl;
    }
};


int main()
{   int num = 432;
    Solution obj(num);
    std::cout<<"Reverse Integer Program"<<std::endl;
    obj.print();

    obj.reverse();

    obj.print();





}