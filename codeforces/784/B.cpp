#include<bits/stdc++.h>
#include<stdlib.h>
#define ll long long
using namespace std;
void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        swap(*(str+start), *(str+end));
        start++;
        end--;
    }
}

// Implementation of itoa()
char* itoa(int num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // In standard itoa(), negative numbers are handled only with
    // base 10. Otherwise numbers are considered unsigned.
    if (num < 0 && base == 10)
    {
        isNegative = true;
        num = -num;
    }

    // Process individual digits
    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }

    // If number is negative, append '-'
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0'; // Append string terminator

    // Reverse the string
    reverse(str, i);

    return str;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	int m[1001];
	m['0'] = 1;
	m['1'] = 0;
	m['2'] = 0;
	m['3'] = 0;
	m['4'] = 1;
	m['5'] = 0;
	m['6'] = 1;
	m['7'] = 0;
	m['8'] = 2;
	m['9'] = 1;
	m['a'] = 1;
	m['b'] = 2;
	m['c'] = 0;
	m['d'] = 1;
	m['e'] = 0;
	m['f'] = 0;
	char bal[100];
	memset(bal,0,sizeof(bal));
    itoa(n,bal,16);
	int len = strlen(bal);
	//cout<<len<<endl;
	long long cnt = 0;
	for(int i=0;i<len;i++){
		cnt += m[bal[i]];
		//cout<<bal[i]<<" ";
	}
	//cout<<endl;
	cout << cnt << endl;
 	return 0;
}
