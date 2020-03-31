#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    char board[3][3];
    int no_of_cross = 0, no_of_nought = 0, no_of_dot=0;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) 
        {
            cin>>board[i][j];
            if(board[i][j] == '.') no_of_dot++;
            else if(board[i][j] == 'X') no_of_cross++;
            else if(board[i][j] == '0') no_of_nought++;
        }
    }

    bool got_winner = false;
    bool illegal = false;
    char c;

    if(board[0][0] == board[0][1] && board[0][1] == board[0][2] && (board[0][0] == 'X' || board[0][0] == '0')) {
        c = board[0][0];
        got_winner = true;
        // if(got_winner) cout<<"1"<<endl;
    }
    if(board[0][0] == board[1][0] && board[1][0] == board[2][0] && (board[0][0] == 'X' || board[0][0] == '0')) {
        if(got_winner && c != board[0][0]) illegal = true;
        c = board[0][0];
        got_winner = true;
        // if(got_winner) cout<<"2"<<endl;
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && (board[0][0] == 'X' || board[0][0] == '0')) {
        if(got_winner && c != board[0][0]) illegal = true;
        c = board[0][0];
        got_winner = true;
        // if(got_winner) cout<<"3"<<endl;
    }
    if(board[0][1] == board[1][1] && board[1][1] == board[2][1] && (board[0][1] == 'X' || board[0][1] == '0')) {
        if(got_winner && c != board[0][1]) illegal = true;
        c = board[0][1];
        got_winner = true;
        // if(got_winner) cout<<"4"<<endl;
        // cout<<c<<endl;
    }
    if(board[0][2] == board[1][2] && board[1][2] == board[2][2] && (board[0][2] == 'X' || board[0][2] == '0')) {
        if(got_winner && c != board[0][2]) illegal = true;
        c = board[0][2];
        got_winner = true;
        // if(got_winner) cout<<"5"<<endl;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && (board[0][2] == 'X' || board[0][2] == '0')) {
        if(got_winner && c != board[0][2]) illegal = true;
        c = board[0][2];
        got_winner = true;
        // if(got_winner) cout<<"6"<<endl;
    }
    if(board[1][0] == board[1][1] && board[1][1] == board[1][2] && (board[1][0] == 'X' || board[1][0] == '0')) {
        if(got_winner && c != board[1][0]) illegal = true;
        c = board[1][0];
        got_winner = true;
        // if(got_winner) cout<<"7"<<endl;
    }
    if(board[2][0] == board[2][1] && board[2][1] == board[2][2] &&(board[2][0] == 'X' || board[2][0] == '0')) {
        if(got_winner && c != board[2][0]) illegal = true;
        c = board[2][0];
        got_winner = true;
        // if(got_winner) cout<<"8"<<endl;
    }
    if(illegal) {
        cout<<"illegal"<<endl;
        // cout<<"ex"<<endl;
        return 0;
    }  

    if(no_of_dot == 0) {
        if(no_of_nought > no_of_cross) illegal = true; 
        if(no_of_cross - no_of_nought > 1) illegal = true;
        if(!illegal and !got_winner) {
            if(no_of_nought == 4 && no_of_cross == 5) {
                cout<<"draw"<<endl;
            }
            else illegal = true;
        }
        // cout<<"ex"<<endl;  
    }

    else {
        if(no_of_nought > no_of_cross) illegal = true;
        else if(no_of_nought == no_of_cross) {
            if(got_winner && !illegal);
            else if(!got_winner) {
                cout<<"first"<<endl;
                return 0;
            }
        }

        else if(no_of_cross > no_of_nought) {
            if(no_of_cross - no_of_nought != 1) illegal = true;
            else if(!got_winner && !illegal) {
                cout<<"second"<<endl;
                return 0;
            }
        }
    }
    if(illegal) cout<<"illegal"<<endl;
    else if(got_winner) {
        if(c == 'X') {
            if(no_of_cross <= no_of_nought) cout<<"illegal"<<endl;
            else cout<<"the first player won"<<endl;
        }
        else if(c == '0') {
            if(no_of_nought != no_of_cross) cout<<"illegal"<<endl;
            else cout<<"the second player won"<<endl;
        }
    }
    return 0;
}
