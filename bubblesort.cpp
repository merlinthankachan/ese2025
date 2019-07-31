//===================================================================================
// Name        : Vector_Sort.cpp(bubble sort)
// Author      : Merlin Mariam Thankachan
// Description : Vector elements and frequency of words in C++, Ansi-style
//===================================================================================
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> v;
vector<string> v2;

void Bsortint(vector <int> &num)
{
      int i, j;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = num.size();
      for(i = 0; i <= numLength; i++)
     {
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] < num[j])      // ascending order simply changes to <
              {
                    temp = num[j];           // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}
void Bsortchar(vector <string> &ch)
	
{
    int i, j;
    int charLength = ch.size();
    cout<<ch.size();
    for(i = 0; i <= charLength; i++)
    {
        for (j=0; j < (charLength -1); j++)
	{
            if (ch[j+1] < ch[j])
            {
            	//std::swap(ch[j], ch[j+i]);
            	string temp = ch[j];
            	ch[j] = ch[j+1];
            	ch[j+1]= temp;
            }
        }
    }
    return;
}

int main()
{
    int charSize,intSize,a;
	//********************
    cout<<"Enter the Size of the integer Vector"<<endl;
    	cin>>intSize;
    	cout<<"Enter the integer Vector"<<endl;
    	for(int i=0;i<intSize;i++)
    	{
    	 cin>>a;
    	 v.push_back(a);
    	}

    //********************
    cout<<"Enter the Size of the char Vector"<<endl;
    cin>>charSize;
    cout<<"Enter the char Vector"<<endl;
    char c[100];
    for(int i=0;i<charSize;i++)
    {
        cin>>c;
        v2.push_back(c);
    }
    //********************
    Bsortint(v);//calling Bubble sort integer Function.
    Bsortchar(v2);//calling Bubble sort Character Function.
    //*********************

	cout<<"The sorted integer vector array is : "<<endl;
	for(int i=0;i<intSize;i++)
	    {
	      cout<<v[i]<<" ";
	    }
	//*********************
    cout<<endl<<"The sorted character vector array is : "<<endl;
    for(int i=0;i<charSize;i++)
    {
        cout<<v2[i]<<" ";
    }
    //*********************
    return 0;
}
