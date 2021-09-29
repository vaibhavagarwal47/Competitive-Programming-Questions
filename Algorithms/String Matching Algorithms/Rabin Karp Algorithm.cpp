//Rabin Karp Algorithm - O(n+m){Best & Average case}

#include<bits/stdc++.h>
using namespace std;
#define d 256

void rabinkarp(string text,string pattern,int prime)
{
	int tlen=text.length();
	int plen=pattern.length();
	int thash=0;
	int phash=0;
	int h=1;
	for(int i=0;i<plen-1;i++)
	{
		h = (h*d)%prime;
	}
	for(int i=0;i<plen;i++)
	{
		thash=(thash*d + text[i])%prime;
		phash=(phash*d + pattern[i])%prime;
	}
	for(int i=0;i<tlen-plen;i++)
	{
		if(phash==thash)
		{
			for(int j=0;j<plen;j++)
			{
				if(text[i+j]!=pattern[j])
				{
					break;
				}
			}
			cout<<"The pattern is at: "<<i<<endl;
		}
		if(i<tlen-plen)
		{
			thash=(d*(thash - text[i]*h) + text[i+plen])%prime;
			if(thash<0)
			{
				thash+=prime;
			}
		}
	}
}

int main()
{
	string text,pattern;
	cin>>text;
	cin>>pattern;
	int prime=101;
	rabinkarp(text, pattern, prime);
	return 0;
}