/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
int main(){
    
    string Line_of_code;
    bool comment = 0;
    
    while( getline( cin, Line_of_code ) ){
        
        bool Yes = 0;
        // To Skip Empty Line
        if(Line_of_code == "" || Line_of_code == " ") {
                continue;
            }
        
        for(int i=0; i<Line_of_code.size(); i++){
            // Single Comment
            if(Line_of_code[i] == '/' && Line_of_code[i+1] == '/' && !comment){
                break;
            }
            // Start Block Comment
            else if(Line_of_code[i] == '/' && Line_of_code[i+1] == '*'){
                i++;
                comment = 1;
            }
            // End Clock Comment
            else if(Line_of_code[i] == '*' && Line_of_code[i+1] == '/' && comment){
                i++;
                comment = 0;
            }
            // Just Code
            else if(!comment){
                cout<<Line_of_code[i];
                Yes = 1;
            }
        }

        // New Line
        if(Yes && !comment){
        cout<<'\n';
        }
        
    }
    return 0;
}