#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string o1="PE_Problem_";
int probCt=1;
string itos(ll n) {
    string num="";
    while(n) {
        ll tmp=n%10;
        n/=10;
        char nn=tmp+'0';
        num=nn+num;
    }
    ll len=num.size();
    for(ll i=len;i<=3;i++)num='0'+num;
    return num;
}

int main() {
    freopen("project_euler_problems.txt","r",stdin);
    string s,t;
    string start1="";
    while(getline(cin,s)){
        if(s=="$")break;
        start1+=s;
        start1+="\n";
    }
    string end1="\n\n";
    while(getline(cin,s)){
        if(s=="$")break;
        end1+=s;
        end1+="\n";
    }
    string idx=itos(probCt);
    string o3=o1+idx+".cpp";
    freopen(o3.c_str(),"w",stdout);
    cout<<start1;
    cout<<"Problem No      : "<<probCt<<endl;
    cout<<"Problem Name    : "<<endl;
    cout<<"Solving Method  : "<<endl<<endl;
    cout<<"*/\n\n/*\n";
    cout<<"Problem Statement : "<<endl;
    while(getline(cin,s)) {
        stringstream X(s);
        bool ck=true;
        while(getline(X,t,' ')) {
            if(t=="Answer:") {
                ck=false;
                break;
            }
        }
        if(ck==false) {
            cout<<"*/\n";
            cout<<end1;
            probCt++;
            idx=itos(probCt);
            o3=o1+idx+".cpp";
            fclose(stdout);
            freopen(o3.c_str(),"w",stdout);
            cout<<start1;
            cout<<"Problem No      : "<<probCt<<endl;
            cout<<"Problem Name    : "<<endl;
            cout<<"Solving Method  : "<<endl<<endl;
            cout<<"*/\n\n/*\n";
            cout<<"Problem Statement : "<<endl;
        }else if(s=="")continue;
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
