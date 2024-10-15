#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string, bool> say_word;
    char last_word = words[0][words[0].length()- 1];
    int turn_player = 2;
    int time = 1;

    answer.push_back(0);
    answer.push_back(0);
    say_word[words[0]] = true;
    for (int turn = 1; turn < words.size(); turn++)
    {
        cout << turn_player << " " << time << std::endl;
        if (words[turn][0] != last_word)
        {
            answer[0] = turn_player;
            answer[1] = time;
            break;
        }
        else
        {
            if (say_word[words[turn]] == false)
            {
                say_word[words[turn]] = true;
            }
            else
            {
                answer[0] = turn_player;
                answer[1] = time;
                break;
            }
            last_word = words[turn][words[turn].length() - 1];
            if (turn_player == n)
            {
                turn_player = 1;
                time++;
            }
            else
            {
                turn_player++;
            }
        }
    }
    return answer;
}
