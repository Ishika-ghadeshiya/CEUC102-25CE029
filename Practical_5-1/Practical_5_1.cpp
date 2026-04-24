#include<iostream>
using namespace std;
int main()
{
    string pg,words[1000],temp="";
    int w=0,freq[1000]={0};
    cout<<"enter your paragragh\n";
    getline(cin,pg);

     for(int i=0;i<pg.length();i++)
    {
        if(pg[i]>=65&&pg[i]<=90)
        {
            pg[i]=pg[i]+32;
        }
    }

    for(int i=0;i<=pg.length();i++)
    {
        if(pg[i]==' '||pg[i]=='\0'||pg[i]=='\n'||pg[i]=='\t')
        {
            if(temp!="")
            {
                int f=-1;
                for(int j=0;j<w;j++)
                {
                    if(words[j]==temp)
                    {
                        f=j;
                        break;

                    }

                }
                if(f!=-1)
                    {
                        freq[f]++;
                    }
                     else
                {
                    words[w] = temp;
                    freq[w] = 1;
                    w++;
                }
                temp = "";
            }

        }
            else
                {
                    temp=temp+pg[i];
                }
    }
    for(int i=0;i<w;i++)
    {
        cout<<words[i]<<"  "<<freq[i]<<endl;
    }
    return 0;
}
