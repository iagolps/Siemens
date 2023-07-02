#include <iostream>
#include <string>

using namespace std;

string ConcatRemove(string s, string t, int k) {
    int commonLength = 0;

    while (commonLength < s.length() && commonLength < t.length() && s[commonLength] == t[commonLength])
	{
        commonLength++;
    }

    int minOperations = s.length() - commonLength + t.length() - commonLength;

    if (k >= minOperations && (k - minOperations) % 2 == 0 || minOperations == 0)
	{
        return "yes";
    }
	else
	{
        return "no";
    }
}
