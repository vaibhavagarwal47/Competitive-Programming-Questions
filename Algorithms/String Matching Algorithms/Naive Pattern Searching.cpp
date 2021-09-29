//Naive Approach - O(m*(n-m+1)){worst case}

#include<bits/stdc++.h>
using namespace std;

void stringmatch(string text,string pattern)
{
	int tlen=text.length();
	int plen=pattern.length();
	for(int i=0;i<=tlen-plen;i++)
	{
		for(int j=0;j<plen;j++)
		{
			if(text[i+j]!=pattern[j])
			{
				break;
			}
		}
		if(j==plen)
		{
			cout<<"The pattern is from index: "<<i<<endl;
		}
	}
}

int main()
{
	string text,pattern;
	cin>>text;
	cin>>pattern;
	stringmatch(text, pattern);
	return 0;
}