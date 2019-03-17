#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cout<<"Adjust your first character to be the message character for the real message in output"<<endl;
    //because the algorithm of this program is set for only first character to be message character
    cout<<"Enter the key";
    cin>>n;
    FILE *fp1,*fp2;
    fp1=fopen("file2.txt","r+");//encrypted file
    fp2=fopen("file3.txt","w+");//decrypted file
    char ch;
    cout<<"Your file is ready";
    while(feof(fp1)==0)
    {

    ch=fgetc(fp1);
    if(!feof(fp1)){
    fputc(ch,fp2);//only message character gets printed in file
     for (int i = 0; i < n; i++)
        {
            ch=fgetc(fp1);//this inputs are gets skipped so extra character which are ciphered gets removed
        }
     }
    }
    fclose(fp1);
    fclose(fp2);
}

