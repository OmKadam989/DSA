// string
#include<iostream>
using namespace std;
int main() {
    string s1="hello";
    string s2="om";
    string s3= s1.append(s2);
    cout<<s3;
}
#include<iostream>
using namespace std;
int main() {
    string s1="hello";
    string s2="om";
    string s3= s1.append(s2);
    cout<<s3<<endl;
    cout<<s3.size();
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    string s1="hello !!";
    string s2="om";
    string s3= s1.append(s2);
    cout<<s3<<endl;
    // cout<<s3.size()<<endl;
    // s3.pop_back();
    // cout<<s3;
    reverse(s3.begin(), s3.end());
    cout<<s3;
}

// sorting a string in C++
#include<iostream>
using namespace std;
int main() {
    string s1="asnbjweoxb";
    
    int count[26]={0};
    int n= sizeof(count) / sizeof(count[0]);
    for(int i=0; i<s1.size(); i++)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<count[i]; j++)
        {
            char c= 'a' + i;
            cout<<c;
        }
    }
     
}