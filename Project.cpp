#include<bits/stdc++.h>
#include<fstream>
#include<ctime>
#include<string.h>
#include<cstdlib>
using namespace std;
int tictoc();
void instructions();
int tictokwithpc();
void figure(char square[]);
int win(char square[]);
void show_score();
void save_score(int );
void write_csv_file(int ,int );
int tictoktoe();
int hangman();
void hang();
int hangmangame();
int birthdaygame();

void show_score1();
void save_score1(int );
void write_csv_file1(int ,int );
void reset1();
//player vs pc tictic
int tictokwithpc()
{
    char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
    int player = 1,i,choice;

    char mark;
    do
    {
        figure(square);

        if(player%2==1)
            player=1;
        else
            player=2;


// player 2
        if(player==2)
        {
            bool isFound = false;
            cout << "Players  " << player<<endl;
            //cout<<"Press Enter for CPU"<<endl;

            for(int i=1; i<=9; i++)
            {

                bool isDone=true;
                if(i==1)
                {
                    char temp = square[1];
                    if(square[i+1]==temp)
                    {
                        if(square[i+2]=='3')
                        {
                            square[i+2]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i+2]==temp&&!isDone)
                    {
                        if(square[i+1]=='2')
                        {
                            square[i+1]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i+3]==temp&&!isDone)
                    {
                        if(square[i+6]=='7')
                        {
                            square[i+6]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+6]==temp&&!isDone)
                    {
                        if(square[i+3]=='4')
                        {
                            square[i+3]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+4]==temp&&!isDone)
                    {
                        if(square[i+8]=='9')
                        {
                            square[i+8]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+8]==temp&&!isDone)
                    {
                        if(square[i+4]=='5')
                        {
                            square[i+4]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }

                }
                if(i==2)
                {
                    char temp = square[2];
                    if(square[i+1]==temp)
                    {
                        if(square[i-1]=='1')
                        {
                            square[i-1]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-1]==temp&&!isDone)
                    {
                        if(square[i+1]=='3')
                        {
                            square[i+1]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+3]==temp&&!isDone)
                    {
                        if(square[i+6]=='8')
                        {
                            square[i+6]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+6]==temp&&!isDone)
                    {
                        if(square[i+3]=='5')
                        {
                            square[i+3]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }

                }
                if(i==3)
                {
                    char temp = square[3];
                    if(square[i-1]==temp)
                    {
                        if(square[i-2]=='1')
                        {
                            square[i-2]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-2]==temp&&!isDone)
                    {
                        if(square[i-1]=='2')
                        {
                            square[i-1]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+2]==temp&&!isDone)
                    {
                        if(square[i+4]=='7')
                        {
                            square[i+4]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+4]==temp&&!isDone)
                    {
                        if(square[i+2]=='5')
                        {
                            square[i+2]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i+3]==temp&&!isDone)
                    {
                        if(square[i+6]=='9')
                        {
                            square[i+6]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+6]==temp&&!isDone)
                    {
                        if(square[i+3]=='6')
                        {
                            square[i+3]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                }
                if(i==4)
                {
                    char temp = square[4];
                    if(square[i-3]==temp)
                    {
                        if(square[i+3]=='7')
                        {
                            square[i+3]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i+3]==temp&&!isDone)
                    {
                        if(square[i-3]=='1')
                        {
                            square[i-3]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+1]==temp&&!isDone)
                    {
                        if(square[i+2]=='6')
                        {
                            square[i+2]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+2]==temp&&!isDone)
                    {
                        if(square[i+1]=='5')
                        {
                            square[i+1]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }

                }
                if(i==5)
                {
                    char temp = square[5];
                    if(square[i+1]==temp)
                    {
                        if(square[i-1]=='4')
                        {
                            square[i-1]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-1]==temp&&!isDone)
                    {
                        if(square[i+1]=='6')
                        {
                            square[i+1]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+3]==temp&&!isDone)
                    {
                        if(square[i-3]=='2')
                        {
                            square[i-3]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-3]==temp&&!isDone)
                    {
                        if(square[i+3]=='8')
                        {
                            square[i+3]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-4]==temp&&!isDone)
                    {
                        if(square[i+4]=='9')
                        {
                            square[i+4]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+4]==temp&&!isDone)
                    {
                        if(square[i-4]=='1')
                        {
                            square[i-4]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+2]==temp&&!isDone)
                    {
                        if(square[i-2]=='3')
                        {
                            square[i-2]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-2]==temp&&!isDone)
                    {
                        if(square[i+2]=='7')
                        {
                            square[i+2]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                }
                if(i==6)
                {
                    char temp = square[6];
                    if(square[i-1]==temp)
                    {
                        if(square[i-2]=='4')
                        {
                            square[i-2]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-2]==temp&&!isDone)
                    {
                        if(square[i-1]=='5')
                        {
                            square[i-1]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-3]==temp&&!isDone)
                    {
                        if(square[i+3]=='9')
                        {
                            square[i+3]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+3]==temp&&!isDone)
                    {
                        if(square[i-3]=='3')
                        {
                            square[i-3]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }

                }
                if(i==7)
                {
                    char temp = square[7];
                    if(square[i-6]==temp)
                    {
                        if(square[i-3]=='4')
                        {
                            square[i-3]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-3]==temp&&!isDone)
                    {
                        if(square[i-6]=='1')
                        {
                            square[i-6]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+1]==temp&&!isDone)
                    {
                        if(square[i+2]=='9')
                        {
                            square[i+2]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i+2]==temp&&!isDone)
                    {
                        if(square[i+1]=='8')
                        {
                            square[i+1]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-2]==temp&&!isDone)
                    {
                        if(square[i-4]=='3')
                        {
                            square[i-4]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-4]==temp&&!isDone)
                    {
                        if(square[i-2]=='5')
                        {
                            square[i-2]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                }
                if(i==8)
                {
                    char temp = square[8];
                    if(square[i+1]==temp)
                    {
                        if(square[i-1]=='7')
                        {
                            square[i-1]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-1]==temp&&!isDone)
                    {
                        if(square[i+1]=='9')
                        {
                            square[i+1]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-3]==temp&&!isDone)
                    {
                        if(square[i-6]=='2')
                        {
                            square[i-6]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-6]==temp&&!isDone)
                    {
                        if(square[i-3]=='5')
                        {
                            square[i-3]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }

                }

                if(i==9)
                {
                    char temp = square[9];
                    if(square[i-1]==temp)
                    {
                        if(square[i-2]=='7')
                        {
                            square[i-2]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-2]==temp&&!isDone)
                    {
                        if(square[i-1]=='8')
                        {
                            square[i-1]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-4]==temp&&!isDone)
                    {
                        if(square[i-8]=='1')
                        {
                            square[i-8]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-8]==temp&&!isDone)
                    {
                        if(square[i-4]=='5')
                        {
                            square[i-4]='O';

                            isDone=true;
                            isFound=true;
                        }

                    }
                    if(square[i-3]==temp&&!isDone)
                    {
                        if(square[i-6]=='3')
                        {
                            square[i-6]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                    if(square[i-6]==temp&&!isDone)
                    {
                        if(square[i-3]=='6')
                        {
                            square[i-3]='O';
                            isDone=true;
                            isFound=true;
                        }
                    }
                }
            }
            if(!isFound)
            {
                if(square[1]=='X'&&square[5]=='X')
                {
                    square[9]='O';
                }
                else if(square[5]=='X'&&square[4]=='X'&&square[6]!='X'&&square[6]!='O')square[6]='O';
                else if(square[5]=='X'&&square[9]=='X'&&square[1]!='X'&&square[1]!='O')square[1]='O';
                else if(square[7]=='X'&&square[5]=='X'&&square[3]!='X'&&square[3]!='O')square[3]='O';
                else if(square[7]=='X'&&square[8]=='X'&&square[9]!='X'&&square[9]!='O')square[9]='O';
                else if(square[7]=='X'&&square[4]=='X'&&square[1]!='X'&&square[1]!='O')square[1]='O';
                else if(square[9]=='X'&&square[6]=='X'&&square[3]!='X'&&square[3]!='O')square[3]='O';
                else if(square[5]=='X'&&square[7]=='X')square[3]='O';
                else if(square[1]=='X'&&square[3]=='X')square[2]='O';
                else
                {
                choice=rand()%9;
                    mark='O';
                    int turn=1;
                    int placed=0;
                    while(placed==0)
                    {

                        if (choice == 1 && square[1] == '1')
                        {
                            square[1] = mark;
                            placed=1;
                        }
                        else if (choice == 2 && square[2] == '2')
                        {
                            square[2] = mark;
                            placed=1;
                        }
                        else if (choice == 3 && square[3] == '3')
                        {

                            square[3] = mark;
                            placed=1;
                        }
                        else if (choice == 4 && square[4] == '4')
                        {

                            placed=1;
                            square[4] = mark;
                        }
                        else if (choice == 5 && square[5] == '5')
                        {

                            square[5] = mark;
                            placed=1;
                        }
                        else if (choice == 6 && square[6] == '6')
                        {

                            square[6] = mark;
                            placed=1;
                        }
                        else if (choice == 7 && square[7] == '7')
                        {

                            square[7] = mark;
                            placed=1;
                        }
                        else if (choice == 8 && square[8] == '8')
                        {

                            square[8] = mark;
                            placed=1;
                        }
                        else if (choice == 9 && square[9] == '9')
                        {

                            square[9] = mark;
                            placed=1;
                        }

                        else
                        {
                            choice=rand()%9;
                        }
                    }
                }
            }
            i=win(square);
            player++;

            figure(square);
        }

// player 1
        else if(player==1)
        {
            cout << "Players  " << player << ", enter a number:  ";
            cin >> choice;
            mark='X';

            if (choice == 1 && square[1] == '1')

                square[1] = mark;
            else if (choice == 2 && square[2] == '2')

                square[2] = mark;
            else if (choice == 3 && square[3] == '3')

                square[3] = mark;
            else if (choice == 4 && square[4] == '4')

                square[4] = mark;
            else if (choice == 5 && square[5] == '5')

                square[5] = mark;
            else if (choice == 6 && square[6] == '6')

                square[6] = mark;
            else if (choice == 7 && square[7] == '7')

                square[7] = mark;
            else if (choice == 8 && square[8] == '8')

                square[8] = mark;
            else if (choice == 9 && square[9] == '9')

                square[9] = mark;
            else
            {
                cout<<"Invalid move ";

                player--;

            }
            i=win(square);

            player++;
        }
    }
    while(i==-1);
    figure(square);
    if(i==1)
    {
        cout<<"Congratulation! \nPlayer "<<--player<<" win ";
        save_score(player);
    }
    else
    {
        cout<<"  OOps!\nGame draw";
    }
    //show_score();
}
void figure(char square[])
{
    system("cls");

    cout<<"Player 1 (X) "<<endl;
    cout<<"Player 2 PC (O)" << endl << endl;
    cout<<endl;
    cout<<" _____ _____ _____ "<<endl;
    cout<<"|     |     |     |"<<endl;
    cout<<"|  " << square[1] <<"  |  "<< square[2]<<"  |  "<<square[3]<< "  |  "<<endl;

    cout<<"|_____|_____|_____|"<<endl;
    cout<<"|     |     |     |"<<endl;

    cout<<"|  " <<square[4] <<"  |  "<< square[5]<< "  |  "<<square[6]<< "  |  "<<endl;

    cout<<"|_____|_____|_____|"<<endl;
    cout<<"|     |     |     |"<<endl;

    cout<<"|  " <<square[7]<< "  |  "<< square[8]<<"  |  "<< square[9]<<"  |  "<<endl;

    cout<<"|_____|_____|_____|"<<endl<<endl;
}
int win(char square[])
{
    if(square[1]==square[2]&&square[2]==square[3])

        return 1;
    else if(square[4]==square[5]&&square[5]==square[6])

        return 1;
    else if(square[7]==square[8]&&square[8]==square[9])

        return 1;
    else if(square[1]==square[4]&&square[4]==square[7])

        return 1;
    else if(square[2]==square[5]&&square[5]==square[8])

        return 1;
    else if(square[3]==square[6]&&square[6]==square[9])

        return 1;
    else if(square[1]==square[5]&&square[5]==square[9])

        return 1;
    else if(square[3]==square[5]&&square[5]==square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
             && square[4] != '4' && square[5] != '5' && square[6] != '6'
             && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}
//tic toc pc save file
void write_csv_file(int player1_score,int player2_score)
{
    ofstream myfile;

    // Open an existing file
    myfile.open ("score.csv");
    myfile << "player 1,player 2,\n";
    myfile << player1_score<<","<<player2_score<<"\n";
    myfile.close();

    return;

}
void save_score(int player)
{

    int player1_index=2;
    int player2_index=3;
    vector<string>score_llist;
    ifstream file ( "score.csv" );
    string value;
    while ( file.good() )
    {
        getline ( file, value, ',' );
        score_llist.push_back(value);
    }

    stringstream str_player1_score(score_llist[player1_index]);
    stringstream str_player2_score(score_llist[player2_index]);
    int p1_score = 0,p2_score=0;
    str_player1_score >> p1_score;
    str_player2_score >> p2_score;

    if(player==1)
    {
        p1_score++;
        write_csv_file(p1_score,p2_score);
    }
    else
    {
        p2_score++;
        write_csv_file(p1_score,p2_score);
    }
    return;

}
void show_score()
{
    vector<string>score_list;
    ifstream file ( "score.csv" );
    string value;

    while ( file.good() )
    {
        getline ( file, value, ',' );

        score_list.push_back(value);
    }

    //removing newline from scores
    score_list[2].erase(remove(score_list[2].begin(), score_list[2].end(), '\n'), score_list[2].end());
    score_list[3].erase(remove(score_list[3].begin(), score_list[3].end(), '\n'), score_list[3].end());

    cout<<endl<<endl<<endl;
    cout<<"  |--------  SCORE   --------|  "<<endl;
    cout<<"  | "<<score_list[0]<<"   |  "<<score_list[1]<<"   |"<<endl;
    cout<<"  |------------|-------------|  "<<endl;
    cout<<"  |  "<<score_list[2]<<"\t       |\t"<<score_list[3]<<"    |"<<endl;
    cout<<"  |------------|-------------|  "<<endl;

    return;
}
//reset
void reset()
{
    cout<<"Data Deleted :/"<<endl;
    write_csv_file(0,0);
}
//tictic p1 vs p2
int tictoktoe()
{
    char square[10]= {'o','1','2','3','4','5','6','7','8','9'};
    int player = 1,i,choice;
    char mark;
    do
    {
        figure(square);

        if(player%2==1)
            player=1;
        else
            player=2;


// player 2
        if(player==2)
        {
            {
                cout << "Players  " << player << ", enter a number:  ";
                cin >> choice;
                mark='O';

                if (choice == 1 && square[1] == '1')

                    square[1] = mark;
                else if (choice == 2 && square[2] == '2')

                    square[2] = mark;
                else if (choice == 3 && square[3] == '3')

                    square[3] = mark;
                else if (choice == 4 && square[4] == '4')

                    square[4] = mark;
                else if (choice == 5 && square[5] == '5')

                    square[5] = mark;
                else if (choice == 6 && square[6] == '6')

                    square[6] = mark;
                else if (choice == 7 && square[7] == '7')

                    square[7] = mark;
                else if (choice == 8 && square[8] == '8')

                    square[8] = mark;
                else if (choice == 9 && square[9] == '9')

                    square[9] = mark;
                else
                {
                    cout<<"Invalid move ";

                    player--;

                }
                i=win(square);

                player++;
            }
        }


// player 1
        else if(player==1)
        {
            cout << "Players  " << player << ", enter a number:  ";
            cin >> choice;
            mark='X';

            if (choice == 1 && square[1] == '1')

                square[1] = mark;
            else if (choice == 2 && square[2] == '2')

                square[2] = mark;
            else if (choice == 3 && square[3] == '3')

                square[3] = mark;
            else if (choice == 4 && square[4] == '4')

                square[4] = mark;
            else if (choice == 5 && square[5] == '5')

                square[5] = mark;
            else if (choice == 6 && square[6] == '6')

                square[6] = mark;
            else if (choice == 7 && square[7] == '7')

                square[7] = mark;
            else if (choice == 8 && square[8] == '8')

                square[8] = mark;
            else if (choice == 9 && square[9] == '9')

                square[9] = mark;
            else
            {
                cout<<"Invalid move ";

                player--;

            }
            i=win(square);

            player++;
        }
    }
    while(i==-1);
    figure(square);
    if(i==1)
    {

        cout<<"Congratulation! \nPlayer "<<--player<<" win ";
        save_score1(player);
    }
    else
        cout<<"  OOps!\nGame draw";
}
void write_csv_file1(int player1_score,int player2_score)
{
    ofstream myfile;

    // Open an existing file
    myfile.open ("score1.csv");
    myfile << "player 1,player 2,\n";
    myfile << player1_score<<","<<player2_score<<"\n";
    myfile.close();

    return;

}
void save_score1(int player)
{

    int player1_index=2;
    int player2_index=3;
    vector<string>score_llist;
    ifstream file ( "score1.csv" );
    string value;
    while ( file.good() )
    {
        getline ( file, value, ',' );
        score_llist.push_back(value);
    }

    stringstream str_player1_score(score_llist[player1_index]);
    stringstream str_player2_score(score_llist[player2_index]);
    int p1_score = 0,p2_score=0;
    str_player1_score >> p1_score;
    str_player2_score >> p2_score;

    if(player==1)
    {
        p1_score++;
        write_csv_file1(p1_score,p2_score);
    }
    else
    {
        p2_score++;
        write_csv_file1(p1_score,p2_score);
    }
    return;

}
void show_score1()
{
    vector<string>score_list;
    ifstream file ( "score1.csv" );
    string value;

    while ( file.good() )
    {
        getline ( file, value, ',' );

        score_list.push_back(value);
    }

    //removing newline from scores
    score_list[2].erase(remove(score_list[2].begin(), score_list[2].end(), '\n'), score_list[2].end());
    score_list[3].erase(remove(score_list[3].begin(), score_list[3].end(), '\n'), score_list[3].end());

    cout<<endl<<endl<<endl;
    cout<<"  |--------  SCORE   --------|  "<<endl;
    cout<<"  | "<<score_list[0]<<"   |  "<<score_list[1]<<"   |"<<endl;
    cout<<"  |------------|-------------|  "<<endl;
    cout<<"  |  "<<score_list[2]<<"\t       |\t"<<score_list[3]<<"    |"<<endl;
    cout<<"  |------------|-------------|  "<<endl;

    return;
}
void reset1()
{
    cout<<"DATA DELETED"<<endl;
    write_csv_file1(0,0);
}
//hangman game
int hangman()
{
    char start {};
    //Start screen
    cout<<"Wlecome To Hangman Game"<<endl;
    //cout<<""<<endl;
    cout<<"_________"<<endl;
    cout<<"   {   | "<<endl;
    cout<<"   O   | "<<endl;
    cout<<"   |   | "<<endl;
    cout<<"  /|\\  | "<<endl;
    cout<<" / | \\ | "<<endl;
    cout<<"  / \\  | "<<endl;
    cout<<" /   \\ | "<<endl;
    cout<<"_______|____" << endl;
    cout<<"Please Press any Key (Enter) To Start : ";

    cin>>start;

    system("CLS");

    //start
    int tries { 6 };
    //number of guess
    char guess;
    bool currentGuess = false;

    char previousGuess[7];
    previousGuess[0]='\0';
    for(int i=0;i<6;i++)
    {
        previousGuess[i]='-';
    }
    previousGuess[6]='\0';

    string word;
    string wordlist[99];


    srand(time(NULL));
    ifstream random;
    random.open("words.txt");

    for(int i=0;i<99;i++)
    {
        random>>wordlist[i];
    }
    int ramdomnum = rand() % 100;
    word = wordlist[ramdomnum];
    //cout<<word<<endl;
    int e = word.length();
    char a = word[0];
    char b = word[e-1];
    random.close();

    string mysteryword(word.length(),'*');
    //cout<<mysteryword<<endl;

    while(tries>=0)
    {
        currentGuess = false;
        cout<<"Here You have 2 clue to win this game :\ "<<endl;
        cout<<"First Letter :"<<a<<"   "<<"Last Letter : "<<b<<endl;
        cout<<"Best Of luck"<<endl;
        cout<<"The word you have to is "<<endl<<endl;
        cout<<mysteryword<<endl<<endl<<endl;
        cout<<"There are "<<mysteryword.length()<<" letters is the word!!!"<<endl;
        cout<<"You have to chance "<<tries<<" Guess :/ "<<endl;

        if(previousGuess[0]=='\0')
        {
            cout<<endl;
        }
        else
        {
            cout<<"You Have Guess : "<<previousGuess<<endl;
        }

        cout<<endl<<endl<<"Guess the Letter : "<<endl;
        cin>>guess;

        for(int i=0;i<mysteryword.length();i++)
        {
            if(word[i]==guess)
            {
                mysteryword[i]=guess;
                //cout<<"You guess right word "<<guess<<"\nCongratulation"<<endl;
                currentGuess = true;
            }
        }

        if(word == mysteryword)
        {
            cout<<endl<<endl<<endl<<"Congratulation !! You got the word correct: "<<mysteryword<<endl;
            cout<<"WINNER WINNER CHICKEN Dinner"<<endl;
            break;
        }
        if(currentGuess==false)
        {
            tries--;
            cout<<"Sorry "<<guess<<" is not Correct!! :/ "<<endl;
        }
        else{
            cout<<"You guess right word "<<guess<<endl;
        }
        switch(tries)
        {

        case 6 :
        {
            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;

            break;
        }

        case 5 :
        {

            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"   O   | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            if(currentGuess==false)
            {
                previousGuess[0]=guess;
            }
            break;
        }


        case 4 :
        {

            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"   O   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            if(currentGuess==false)
            {
                previousGuess[1]=guess;
            }

            break;
        }

        case 3 :
        {
            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"   O   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"  /|   | "<<endl;
            cout<<" / |   | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            if(currentGuess==false)
            {
                previousGuess[2]=guess;
            }

            break;
        }
        case 2 :
        {
            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"   O   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"  /|\\  | "<<endl;
            cout<<" / | \\ | "<<endl;
            cout<<"       | "<<endl;
            cout<<"       | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            if(currentGuess==false)
            {
                previousGuess[3]=guess;
            }

             break;
        }

        case 1 :
        {
            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"   O   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"  /|\\  | "<<endl;
            cout<<" / | \\ | "<<endl;
            cout<<"  /    | "<<endl;
            cout<<" /     | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            if(currentGuess==false)
            {
                previousGuess[4]=guess;
            }
             break;

        }
        case 0 :
        {
            cout<<endl<<"GAME OVER !!!!"<<endl;
            cout<<"_________"<<endl;
            cout<<"   {   | "<<endl;
            cout<<"   O   | "<<endl;
            cout<<"   |   | "<<endl;
            cout<<"  /|\\  | "<<endl;
            cout<<" / | \\ | "<<endl;
            cout<<"  / \\  | "<<endl;
            cout<<" /   \\ | "<<endl;
            cout<<"_______|____" << endl;
            cout<<endl<<endl<<endl<<endl<<endl;
            tries=-1;
            break;
        }
        default :
        {
            cout<<"If you see this line that man There is an error!"<<endl;
        }

        }
    }
    return 0;
}
//Birthday Game
int birthdaygame()
{
    system("cls");
    int month,date;
    int colour;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t**   BIRTHDAY GAME   **" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\n\n\n\n" <<endl;
    //input
    do
    {
        cout<<"Enter your birth month = ";
        cin>>month;
        if((month>=1)&&(month<=12))
            break;
        else
            cout<<"Invalid Input..."<<endl;
    }
    while(1);
    do
    {
        cout<<"Enter your birth date = ";
        cin>>date;
        if(month==2) //used to tackle february month problem
        {
            if((date>=1)&&(date<=29))
                break;
            else
                cout<<"Invalid Input..."<<endl;
        }
        else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
        {
            if((date>=1)&&(date<=31))
                break;
            else
                cout<<"Invalid Input..."<<endl;
        }
        else
        {
            if((date>=1)&&(date<=30))
                break;
            else
                cout<<"Invalid Input..."<<endl;
        }

    }
    while(1);
    cout<<"\n\nColour"<<"===="<<"Code"<<endl
        <<"\nWhite\t=0"<<endl
        <<"Black\t=1"<<endl
        <<"Brown\t=2"<<endl
        <<"Pink\t=3"<<endl
        <<"Red\t=4"<<endl
        <<"Blue\t=5"<<endl
        <<"Green\t=6"<<endl
        <<"Purple\t=7"<<endl
        <<"Grey\t=8"<<endl
        <<"Yellow\t=9"<<endl
        <<"Orange\t=10"<<endl
        <<"Other\t=11"<<endl;
    do
    {
        cout<<"\n\nEnter Your Favorite Color Number = ";
        cin>>colour;
        if((colour>=0)&&(colour<=11))
            break;
        else
            cout<<"Invalid Input";
    }
    while(1);
    cout<<"\n\n\nYour statement according to your info is:\n\n";
    cout<<endl;
//output
    if(month==1)
        cout<<"I fell in love with";
    else if(month==2)
        cout<<"i ate";
    else if(month==3)
        cout<<"I smacked";
    else if(month==4)
        cout<<"I sang to";
    else if(month==5)
        cout<<"I gave my number to";
    else if(month==6)
        cout<<"I murdered";
    else if(month==7)
        cout<<"I shot";
    else if(month==8)
        cout<<"I danced with";
    else if(month==9)
        cout<<"I choked on";
    else if(month==10)
        cout<<"I went out with";
    else if(month==11)
        cout<<"I kissed";
    else
        cout<<"I hugged";
    if(date==1)
        cout<<" a homeless guy";
    else if(date==2)
        cout<<" your mom";
    if(date==3)
        cout<<" a banana";
    if(date==4)
        cout<<" a fork";
    else if(date==5)
        cout<<" a Mexican";
    else if(date==6)
        cout<<" a gangster";
    else if(date==7)
        cout<<" a ninja";
    else if(date==8)
        cout<<" an ipod";
    else if(date==9)
        cout<<" my best friend";
    else if(date==10)
        cout<<" a goat";
    else if(date==11)
        cout<<" my dog";
    else if(date==12)
        cout<<" my dad";
    else if(date==13)
        cout<<" the computer";
    else if(date==14)
        cout<<" a football player";
    else if(date==15)
        cout<<" my neighbor";
    else if(date==16)
        cout<<" myself";
    else if(date==17)
        cout<<" a soda";
    else if(date==18)
        cout<<" a lama";
    else if(date==19)
        cout<<" a pickle";
    else if(date==20)
        cout<<" a stuffed animal";
    else if(date==21)
        cout<<" a weirdo";
    else if(date==22)
        cout<<" a sock";
    else if(date==23)
        cout<<" a doctor";
    else if(date==24)
        cout<<" my psychiatrist";
    else if(date==25)
        cout<<" a policeman";
    else if(date==26)
        cout<<" my brother";
    else if(date==27)
        cout<<" my sister";
    else if(date==28)
        cout<<" a baseball bat";
    else if(date==29)
        cout<<" a dvd player";
    else if(date==30)
        cout<<" my best friends brother";
    else
        cout<<" my cell phone";
    if(colour==0)
        cout<<" because I was high."<<endl;
    else if(colour==1)
        cout<<" because I was drunk."<<endl;
    else if(colour==2)
        cout<<" because your mom told me to."<<endl;
    else if(colour==3)
        cout<<" because I'm retarded."<<endl;
    else if(colour==4)
        cout<<" because the voices told me to."<<endl;
    else if(colour==5)
        cout<<" because I'm hot and i do what I want."<<endl;
    else if(colour==6)
        cout<<" because I hate myself."<<endl;
    else if(colour==7)
        cout<<" because I'm stupid."<<endl;
    else if(colour==8)
        cout<<" because that's how I roll."<<endl;
    else if(colour==9)
        cout<<" because someone offered me 1,000,000 dollars."<<endl;
    else if(colour==10)cout<<" because I love my family."<<endl;
    else
        cout<<" because that's what I do."<<endl;
    cout<<endl<<endl;
    system("pause");
    return 0;
}
int main()
{
    system("cls");
    int input;

    instructions();
    bool exit = false;
    while(!exit && cout << "Enter Input: " && cin >> input)
    {
        switch(input)
        {
        case 1:
            tictoc();
            break;
        case 2:
            hangmangame();
            break;
        case 3:
            birthdaygame();
            break;
        case 4:
            exit = true;
            break;
        default:
            cout << "Invalid Input" << endl;
        }
        instructions();
    }

}
void instructions()
{
    system("cls");
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t**     WELCOME TO    **" <<endl;
    cout << "\t\t\t**   Gaming Project  **" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\n\n\n\n" <<endl;
    cout << "Game Menu :"<<endl;
    cout << "1: Tic Tac Toe Game" << endl;
    cout << "2: Hangman Game" << endl;
    cout << "3: Birthday Game"<<endl;
    cout << "4: Exit" << endl << endl << endl;
}
void tic()
{
    //system("cls");
    cout<<"\n\n";
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t**    Tic TOC TOE    **" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\n\n\n\n" <<endl;

    cout<<"Welcome To Tic Toc Toe Game :"<<endl;
    cout << "1: Player VS PC"<<endl;
    cout << "2: Player VS Player"<<endl;
    cout << "3: Highest Socre (PlayerVsPc)"<<endl;
    cout << "4: Delete Score(P_Vs_PC)" <<endl;
    cout << "5: Highest Socre (PlayerVsPlayer)"<<endl;
    cout << "6: Delete Score(P1_VS_P2)" <<endl;
    cout << "7: Exit" << endl << endl << endl;
}
void hang()
{
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t**   HANGMAN GAME    **" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\t\t\t***********************" <<endl;
    cout << "\n\n\n\n" <<endl;

    cout<<"Welcome To Hangman Game :"<<endl;
    cout<<"1: START"<<endl;
    cout<<"2: EXIT"<<endl;
}
int tictoc()
{
    system("cls");
    int input;
    tic();
    bool exit = false;
    while(!exit && cout << "Enter Input: " && cin >> input)
    {
        switch(input)
        {
        case 1:
            tictokwithpc();
            break;
        case 2:
            tictoktoe();
            break;
        case 3:
            show_score();
            break;
        case 4:
            reset();
            break;
        case 5:
            show_score1();
            break;
        case 6:
            reset1();
            break;
        case 7:
            exit = true;
            break;

        default:
            cout << "Invalid Input" << endl;
        }
        tic();
    }
    return 0;
}
int hangmangame()
{
    system("cls");
    int input;
    hang();
    bool exit = false;
    while(!exit && cout << "Enter Input: " && cin >> input)
    {
        switch(input)
        {
        case 1:
            hangman();
            break;

        case 2:
            exit = true;
            break;

        default:
            cout << "Invalid Input" << endl;
        }
        hang();
    }
    return 0;
}
