#include "iostream"
using namespace std;
int anagram(char [],char []);
int main()
{
char word1[25],word2[25];
int flag;
cout <<"Enter first word:";
cin >>word1;
cout <<"\n";
cout <<"Enter second word:";
cin >>word2;
flag=anagram(word1,word2);
if(flag==1)
{
cout << "words are anagram";
}
else
{
cout << "words are not anagram";
}
}
//calling anagram methods
int anagram(char word1[],char word2[])
{
short int c,count1[26]={0},count2[26]={0};
//for first word
for(c=0;word1[c]!='\0';c++)
{
//increasing count of character appearence 
count1[word1[c]-'a']++;
}
cout <<"\n";
//for second word
for(c=0;word2[c]!='\0';c++)
{
//increasing count of character appearence 
count2[word2[c]-'a']++;
}

c=0;
for(c=0;c<26;c++)
{
if(count1[c]!=count2[c])
{
return 0;
}
}
return 1;
}