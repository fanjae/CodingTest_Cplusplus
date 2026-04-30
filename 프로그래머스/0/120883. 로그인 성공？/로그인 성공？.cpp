#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    bool id_exist = false;
    bool pw_exist = false;
        
    for(int i=0; i<db.size(); i++)
    {
        if(id_pw[0] == db[i][0])
        {
            id_exist = true;
            if(id_pw[1] == db[i][1])
            {
                pw_exist = true;
            }
        }
        if(id_exist == true && pw_exist == true)
        {
            answer = "login";
        }
        else if(id_exist == true && pw_exist == false)
        {
            answer = "wrong pw";
        }  
    }
    if(id_exist == false)
    {
        answer = "fail";
    }
    return answer;
    

}