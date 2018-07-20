#include <iostream>

using namespace std;

int rotation(string s1, string s2){
    if(s1==s2)
        return 0;
    for(ulong i=1;i<s1.length();++i)
        if(s2==(s1.substr(i, s1.length())+s1.substr(0, i)))
            return 1;
        else if (s2==(s1.substr(s1.length() - i, s1.length())+s1.substr(0, s1.length() - i)))
            return 2;
    return -1;

}

int main() {
    auto s1 = "amazon";
    auto s2 = "azonam";
    auto s3 = "onamaz";
    cout<<rotation(s1, s2)<<endl;
    cout<<rotation(s1, s3)<<endl;
    return 0;
}