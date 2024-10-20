#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int max, val, carry;
    int len,len2;
    int m[100050]={0};
    int n[100050]={0};
    int s[100050]={0};
    
    len = a.length();
    len2 = b.length();
    for(int i=0;i<a.length();i++)
    {
        m[len-i-1]=a[i]-48;
    }
    for(int i=0;i<b.length();i++)
     {
        n[len2-i-1]=b[i]-48;
    }
  
    max=len;
    if(len2>len) max=len2;
  
    carry=0;
    for(int i=0;i<max;i++)
     {
        val=m[i]+n[i]+carry;
        carry=val/10;
        s[i]=val%10;
    }
    if(carry>0)
     {
        s[max]=carry;
        max++;
    }
    
    for(int i=0;i<max;i++)
    {
        answer += to_string(s[max-i-1]);
    }
    return answer;
}