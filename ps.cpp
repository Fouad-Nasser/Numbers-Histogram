#include<iostream>
using namespace std;

int main(){
    char s;
    int n,num;
    cin>>s>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>num;
        for (int i = 0; i < num; i++)
        {
            cout<<s;
        }
        cout<<endl;        
    }
    

    return 0;
}
