
//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

int main()
{

   ///*regex_match() -This function return true  if the regular expression is a match against the given string otherwise it returns false.*/

    string a = "GeeksForGeeks";

    regex b("(Geek)(.*)"); // Geeks followed by any character

    if ( regex_match(a, b) )
        cout << "String 'a' matches regular expression 'b' \n";

    // regex_match function for matching a range in string
    // against regex b
    if ( regex_match(a.begin(), a.end(), b) )
        cout << "String 'a' matches with regular expression "
             "'b' in the range from 0 to string end\n";



  ///*regex_search() – This function is used to search for a pattern matching the regular expression*/


    string mystr = "She sells_sea shells in the sea shore";

    // regex expression for pattern to be searched
    regex regexp("s[a-z_]+");

    smatch m;

    regex_search(mystr, m, regexp);

    cout<<"String that matches the pattern:"<<endl;
    for (auto x : m)
        cout << x << " ";

///regex_replace(): This function is used to replace the pattern matching to the regular expression with a string.

  string k = "I am looking for GeeksForGeeks";
  regex e("Geek[a-zA-z]+");

  cout<<regex_replace(k,e,"Engineer")<<endl;
  // or;
  string bk;
  regex_replace(back_inserter(bk), k.begin(), k.end(), e, "Engineers");
  cout<<bk<<endl;


    return 0;

}

