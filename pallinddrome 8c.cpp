//Aryaman Pathak EntcA2 o31 exp8c pallindrome

#include <iostream>

using namespace std;

int main(){
    char s1[100], c = 'a';
    int n1, i = 0;
    cout<<"Enter the String you want to check: "<<endl;
    cin>>s1;
    while (c != '\0')
    {
        c = s1[i++];
    }
    n1 = i-1;
    char s2[n1+1];
    i = 0;

    if (i != n1)
        cout << "The String is not a Palindrome";
    else
        cout << "The String is a Palindrome";
}
/*output
Enter the String you want to check: 
ana
The String is not a Palindrome */