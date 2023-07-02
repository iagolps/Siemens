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

int main() {
    string s, t;
    int k;

	std::cout << "Write the string for s: ";
    getline(cin, s);
	std::cout << std::endl;
	std::cout << "Write the string for t: ";
    getline(cin, t);
	std::cout << std::endl;
	std::cout << "Give the number of operations: ";
    cin >> k;

    string result = ConcatRemove(s, t, k);
    cout << result << endl;

    return 0;
}
