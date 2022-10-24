#include<bits/stdc++.h>
using namespace std;
mt19937 rd(chrono::system_clock::now().time_since_epoch().count());
string a[60],f[20];
map<string,int>b;
inline void init(){
        f[1]="A";f[2]="2";f[3]="3";f[4]="4";f[5]="5";f[6]="6";f[7]="7";f[8]="8";f[9]="9";f[10]="10";f[11]="J";f[12]="Q";f[13]="K",f[16]="XW",f[17]="DW";
        for(int i=3;i<=13;++i)
                b[f[i]]=i;
        b["A"]=14,b["2"]=15;
        b[f[16]]=16,b[f[17]]=17;
}
inline bool cmp(string x,string y){return b[x]<b[y];}
inline bool ck(){
        string a;
        cin>>a;
        return a=="114514";
}
int main(){
//	cout<<"PassWord:";
//	if(!ck()) return 0;
        init();
        while(true){
                string _;
                cin>>_;
                for(int i=1;i<=52;++i)
                        a[i]=f[i%13+1];
                a[53]="DW",a[54]="XW";
                for(int i=1;i<=1000;++i)
                        shuffle(a+1,a+55,rd);
                sort(a+1,a+18,cmp);
                sort(a+18,a+35,cmp);
                sort(a+35,a+52,cmp);
                for(int i=1;i<18;++i)
                        cout<<a[i];
                cout<<'\n';
                for(int i=18;i<35;++i)
                        cout<<a[i];
                cout<<'\n';
                for(int i=35;i<52;++i)
                        cout<<a[i];
                cout<<'\n';
                cout<<a[52]<<a[53]<<a[54]<<endl;
        }
        return 0;
}
