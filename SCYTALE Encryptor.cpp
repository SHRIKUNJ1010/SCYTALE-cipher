#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
#include<cstdio>
using namespace std;
const int MAX = 26;
int main()
{
   srand(time(NULL));
   int n;
   cout<<"Enter the key for SCYTALE";
   cin>>n;//key of scytale cipher
   char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
    cout<<"Your File is ready";
    FILE *fp1,*fp2;
    fp1=fopen("text.txt","r+");//message file
    fp2=fopen("file2.txt","w+");//encrypted file
    char ch;
    while(feof(fp1)==0)
    {

    ch=fgetc(fp1);
    if(!feof(fp1)){
    fputc(ch,fp2);
     for (int i = 0; i < n; i++)
        {fputc(alphabet[rand() % MAX],fp2);}//generating random index to print random alphabet
     }
    }
    fclose(fp1);
    fclose(fp2);

   return 0;
}
