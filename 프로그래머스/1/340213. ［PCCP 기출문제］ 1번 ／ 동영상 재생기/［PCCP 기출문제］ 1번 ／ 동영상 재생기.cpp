#include <string>
#include <vector>
#include <iostream>
using namespace std;

string int_to_string_time_cal(int target)
{
    string temp = "";
    
    int min = target / 60;
    int sec = target % 60;
    
    if(min <= 9)
    {
        temp = "0" + to_string(min);
    }
    else
    {
        temp = to_string(min);
    }
    
    temp += ":";
    if(sec <= 9)
    {
        temp += "0" + to_string(sec);
    }
    else
    {
        temp += to_string(sec);
    }
        
    return temp;
}

int string_to_int_time_cal(string target)
{
    string temp = target.substr(0,2);
    string temp2 = target.substr(3);
    int min = (temp[0] - '0') * 10 + (temp[1] - '0');
    int sec = (temp2[0] - '0') * 10 + (temp2[1] - '0');
    
    return min * 60 + sec;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    
    int video_sec = string_to_int_time_cal(video_len);
    int op_start_sec = string_to_int_time_cal(op_start);
    int op_end_sec = string_to_int_time_cal(op_end);
    int pos_sec = string_to_int_time_cal(pos);
    if(pos_sec >= op_start_sec && pos_sec <= op_end_sec)
    {
        pos_sec = op_end_sec;
    }
    
    for(int i=0; i<commands.size(); i++)
    {
        if(commands[i] == "prev")
        {
            pos_sec = pos_sec - 10;
            if(pos_sec < 10)
            {
                pos_sec = 0;
            }
        }
        else if(commands[i] == "next")
        {
            pos_sec = pos_sec + 10;
            if(pos_sec > video_sec)
            {
                pos_sec = video_sec;
            }
        }
        if(pos_sec >= op_start_sec && pos_sec <= op_end_sec)
        {
            pos_sec = op_end_sec;
        }
    }
    
    answer = int_to_string_time_cal(pos_sec);
    
    return answer;
}