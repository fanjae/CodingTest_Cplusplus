#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;

    string before_string[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string after_string[10] = { "0","1","2","3","4","5","6","7","8","9"};

    for (int i = 0; i < 10; i++)
    {
        size_t pos = 0;

        while ((pos = numbers.find(before_string[i], pos)) != string::npos)
        {
            numbers.replace(numbers.find(before_string[i]), before_string[i].length(), after_string[i]);
            pos += after_string[i].length();
        }
    }
    answer = stol(numbers);
    return answer;
}