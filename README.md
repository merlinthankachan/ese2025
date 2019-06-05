    for(int i=0;i<n;i++)
    {
        if(strcmp(temp[i],x)==0)
            return 0;
    }
    return 1;
}
//******************************
//function to find the frequency of words in the entered text
//******************************
void wordFrequency(string text)
{
		//-----------------------------------
	    char b[50],c[50][50];
	    int i=0,j,k=0,count,m;
	    //-----------------------------------
	    // declaring character array
	    char ch[text.size() + 1];
        // copying the contents of the string to char array
	    std::copy(text.begin(), text.end(),ch);
        for(;;)
        {
            for(j=0;(ch[i]!=' ')&&(ch[i]!='\0');j++)
            {
                b[j]=ch[i];
                i++;
            }
            b[j]='\0';
            strcpy(c[k],b);
            k++;
            if(ch[i]==0)
                break;
            i++;
        }
        cout<<"\n------------------------------------\n";
        cout<<"\tword\tFrequency\n";
        cout<<"------------------------------------\n";
        for(i=0;i<k;i++)
        {
            count=1;
            m=check(c[i],i);
            for(j=i+1;j<k;j++)
            {
                if(strcmp(c[i],c[j])==0 && m==1)
                    count++;
            }
            if(m==1)
            {
                strcpy(temp[i],c[i]);
                //cout<<"\t"<<c[i]<<"\t"<<count<<endl;
                v.push_back(make_pair(c[i],count));
                sort(v.begin(), v.end());
                for (int h=0; h<int(v.size()); h++)
                  cout << v[h].first <<"  "<<v[h].second<< "\n";
            }
        }
        cout<<"------------------------------------";
}
//******************************
int main()
{

    vector <string> colour; // Declaring Vector of String type.
    string text; //variable to accept text from user.
    int choice; // variable to accept choice of word from user.


    cout<<"Enter the line of text"<<endl;
    getline(cin,text);
    //-----------------------------------------------------------------------
    cout<<"The words in the entered text are : "<<endl;
    printWords(text);
    cout<<"Select a word to form vector elements : ";
    cin>>choice;
    //-----------------------------------------------------------------------

    // Initialize vector with strings using push_back command
    cout<<endl;
    colour.push_back("blue"+data[choice][400]);
    colour.push_back("Red"+data[choice][400]);
    colour.push_back("Orange"+data[choice][400]);
    colour.push_back("Yellow"+data[choice][400]);
    cout<<"The vectors with the selected word is as follows : "<<endl;

    // Print Strings stored in Vector
    for (int i=0; i<int(colour.size()); i++)
        cout << colour[i] << "\n";
    // Finding the number of occurrence of words in the entered text.
    //---------------------------------------------------------------------
     wordFrequency(text);//calling the function.
}
