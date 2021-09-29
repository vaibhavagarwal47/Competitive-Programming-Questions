//Knuth Morris Pratt Algorithm - O(n){Worst case}

#include<bits/stdc++.h>
using namespace std;
void computearray(string pattern,int plen, int lpsarr[])
{
	int l=0;
	lpsarr[0]=0;
	int i=1;
	while(i<plen)
	{
		if(pattern[i]==pattern[l])
		{
			l++;
			lpsarr[i]=l;
			i++;
		}
		else
		{
			if(l!=0)
			{
				l=lpsarr[l-1];
			}
			else
			{
				lpsarr[i]=0;
				i++;
			}
		}
	}
}
void kmpalgo(string text,string pattern)
{
	int tlen=text.length();
	int plen=pattern.length();
	int lpsarr[plen];
	computearray(pattern,plen,lpsarr);
	int i=0,j=0;
	while(i<tlen)
	{
		if(pattern[j]==text[i])
		{
			i++;
			j++;
		}
		if(j==plen)
		{
			cout<<"Pattern found at: "<<i-j<<endl;
			j=lpsarr[j-1];
		}
		else if(i<tlen && pattern[j]!=text[i])
		{
			if(j!=0)
			{
				j=lpsarr[j-1];
			}
			else
			{
				i+=1;
			}
		}
	}
}

int main()
{
	string text,pattern;
	cin>>text;
	cin>>pattern;
	kmpalgo(text,pattern);
	return 0;
}