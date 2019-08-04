#include <bits/stdc++.h>
using namespace std;

int td(pair<int,int> i,pair<int,int> f){
    int t;
    if(f.second>i.second){
        t=(f.first-i.first)*60+f.second-i.second;
    }
    else{
        t=(f.first-i.first-1)*60+60-(i.second-f.second);
    }
    return t;
}

int main(int argc, char const *argv[])
{
	pair<pair<int,int>,pair<int,int> > data[10][10][20];
	cout<<"PRESS\nO FOR AMRITSAR\n1 FOR BATHINDA\n2 FOR CHANDIGARH\n3 FOR JALANDHAR\n4 FOR LUDHIANA\n5 FOR PATIALA\n6 FOR SANGRUR\n7 FOR PATHANKOT\n8 FOR FEROZEPUR\n9 FOR MOGA\n";

	{
	    data[0][1][0]=make_pair(make_pair(7,11),make_pair(11,41));
	data[0][1][1]=make_pair(make_pair(13,21),make_pair(17,51));
	data[0][1][2]=make_pair(make_pair(15,52),make_pair(20,22));
	data[0][2][0]=make_pair(make_pair(5,45),make_pair(9,30));
	data[0][2][1]=make_pair(make_pair(9,15),make_pair(14,14));
	data[0][2][2]=make_pair(make_pair(12,10),make_pair(16,55));
	data[0][2][3]=make_pair(make_pair(14,45),make_pair(18,25));
	data[0][3][0]=make_pair(make_pair(5,50),make_pair(7,30));
	data[0][3][1]=make_pair(make_pair(9,0),make_pair(10,45));
	data[0][3][2]=make_pair(make_pair(14,25),make_pair(16,10));
	data[0][4][0]=make_pair(make_pair(6,10),make_pair(9,30));
	data[0][4][1]=make_pair(make_pair(10,50),make_pair(13,40));
	data[0][4][2]=make_pair(make_pair(15,30),make_pair(19,00));
	data[0][5][0]=make_pair(make_pair(5,30),make_pair(11,10));
	data[0][5][1]=make_pair(make_pair(7,20),make_pair(12,40));
	data[0][5][2]=make_pair(make_pair(15,40),make_pair(21,30));
	data[0][5][3]=make_pair(make_pair(17,10),make_pair(23,20));
	data[0][7][0]=make_pair(make_pair(5,30),make_pair(8,10));
	data[0][7][1]=make_pair(make_pair(8,10),make_pair(12,50));
	data[0][7][2]=make_pair(make_pair(12,30),make_pair(16,30));
	data[0][8][0]=make_pair(make_pair(7,30),make_pair(12,00));
	data[0][8][1]=make_pair(make_pair(16,10),make_pair(20,40));

	data[1][0][0]=make_pair(make_pair(4,30),make_pair(8,30));
	data[1][0][1]=make_pair(make_pair(8,40),make_pair(12,50));
	data[1][0][2]=make_pair(make_pair(12,30),make_pair(16,10));
	data[1][0][3]=make_pair(make_pair(17,30),make_pair(21,40));
	data[1][2][0]=make_pair(make_pair(5,01),make_pair(9,00));
	data[1][2][1]=make_pair(make_pair(7,30),make_pair(12,00));
	data[1][2][2]=make_pair(make_pair(11,30),make_pair(16,10));
	data[1][2][3]=make_pair(make_pair(15,30),make_pair(20,30));
	data[1][3][0]=make_pair(make_pair(8,20),make_pair(12,30));
	data[1][3][1]=make_pair(make_pair(11,40),make_pair(15,40));
	data[1][3][2]=make_pair(make_pair(14,20),make_pair(20,00));
	data[1][4][0]=make_pair(make_pair(5,40),make_pair(8,10));
	data[1][4][1]=make_pair(make_pair(8,10),make_pair(11,30));
	data[1][4][2]=make_pair(make_pair(12,30),make_pair(15,30));
	data[1][4][3]=make_pair(make_pair(14,50),make_pair(18,00));
	data[1][5][0]=make_pair(make_pair(6,40),make_pair(9,00));
	data[1][5][1]=make_pair(make_pair(8,30),make_pair(11,40));
	data[1][5][2]=make_pair(make_pair(12,30),make_pair(15,30));
	data[1][5][3]=make_pair(make_pair(15,30),make_pair(19,00));
	data[1][6][0]=make_pair(make_pair(6,00),make_pair(8,30));
	data[1][6][1]=make_pair(make_pair(9,30),make_pair(12,00));
	data[1][6][2]=make_pair(make_pair(13,00),make_pair(15,20));
	data[1][6][3]=make_pair(make_pair(15,30),make_pair(17,30));
	data[1][6][4]=make_pair(make_pair(18,00),make_pair(20,30));
	data[1][7][0]=make_pair(make_pair(6,30),make_pair(11,30));
	data[1][7][1]=make_pair(make_pair(12,50),make_pair(18,30));
	data[1][7][2]=make_pair(make_pair(16,40),make_pair(22,30));
	data[1][8][0]=make_pair(make_pair(5,30),make_pair(7,40));
	data[1][8][1]=make_pair(make_pair(12,40),make_pair(14,30));
	data[1][8][2]=make_pair(make_pair(17,30),make_pair(19,40));
	data[1][9][0]=make_pair(make_pair(6,00),make_pair(8,10));
	data[1][9][1]=make_pair(make_pair(12,10),make_pair(14,00));

	data[2][0][0]=make_pair(make_pair(6,00),make_pair(10,20));
	data[2][0][1]=make_pair(make_pair(9,30),make_pair(13,30));
	data[2][0][2]=make_pair(make_pair(13,00),make_pair(17,30));
	data[2][1][0]=make_pair(make_pair(6,30),make_pair(10,30));
	data[2][1][1]=make_pair(make_pair(9,50),make_pair(14,00));
	data[2][1][2]=make_pair(make_pair(13,40),make_pair(18,00));
	data[2][3][0]=make_pair(make_pair(8,30),make_pair(11,40));
	data[2][3][1]=make_pair(make_pair(12,30),make_pair(15,30));
	data[2][3][2]=make_pair(make_pair(15,30),make_pair(19,00));
	data[2][4][0]=make_pair(make_pair(6,00),make_pair(8,30));
	data[2][4][1]=make_pair(make_pair(9,30),make_pair(12,00));
	data[2][4][2]=make_pair(make_pair(13,00),make_pair(15,20));
	data[2][5][0]=make_pair(make_pair(15,30),make_pair(17,30));
	data[2][5][1]=make_pair(make_pair(18,00),make_pair(20,30));
	data[2][5][2]=make_pair(make_pair(13,00),make_pair(15,20));
	data[2][6][0]=make_pair(make_pair(15,30),make_pair(17,30));
	data[2][6][1]=make_pair(make_pair(18,00),make_pair(20,30));
	data[2][6][2]=make_pair(make_pair(12,30),make_pair(15,30));
	data[2][7][0]=make_pair(make_pair(14,50),make_pair(18,00));
	data[2][7][1]=make_pair(make_pair(6,40),make_pair(9,00));
	data[2][7][2]=make_pair(make_pair(8,30),make_pair(11,40));
	data[2][8][0]=make_pair(make_pair(12,30),make_pair(15,30));
	data[2][8][1]=make_pair(make_pair(15,30),make_pair(19,00));
	data[2][8][2]=make_pair(make_pair(6,00),make_pair(8,30));
	data[2][9][0]=make_pair(make_pair(9,30),make_pair(12,00));
	data[2][9][1]=make_pair(make_pair(13,00),make_pair(15,20));
	data[2][9][2]=make_pair(make_pair(15,30),make_pair(17,30));

	data[3][0][0]=make_pair(make_pair(13,00),make_pair(15,30));
	data[3][0][1]=make_pair(make_pair(15,30),make_pair(17,30));
	data[3][0][2]=make_pair(make_pair(18,00),make_pair(20,30));
	data[3][1][0]=make_pair(make_pair(13,30),make_pair(15,30));
	data[3][1][1]=make_pair(make_pair(14,50),make_pair(18,00));
	data[3][1][2]=make_pair(make_pair(6,40),make_pair(9,00));
	data[3][2][0]=make_pair(make_pair(8,30),make_pair(11,40));
	data[3][2][1]=make_pair(make_pair(13,30),make_pair(15,30));
	data[3][2][2]=make_pair(make_pair(15,30),make_pair(19,00));
	data[3][4][0]=make_pair(make_pair(6,00),make_pair(8,30));
	data[3][4][1]=make_pair(make_pair(9,30),make_pair(13,00));
	data[3][4][2]=make_pair(make_pair(13,00),make_pair(15,30));
	data[3][5][0]=make_pair(make_pair(15,30),make_pair(17,30));
	data[3][5][1]=make_pair(make_pair(18,00),make_pair(20,30));
	data[3][5][2]=make_pair(make_pair(13,00),make_pair(15,30));
	data[3][6][0]=make_pair(make_pair(15,30),make_pair(17,30));
	data[3][6][1]=make_pair(make_pair(18,00),make_pair(20,30));
	data[3][6][2]=make_pair(make_pair(13,30),make_pair(15,30));
	data[3][7][0]=make_pair(make_pair(14,50),make_pair(18,00));
	data[3][7][1]=make_pair(make_pair(6,40),make_pair(9,00));
	data[3][7][2]=make_pair(make_pair(8,30),make_pair(11,40));
	data[3][8][0]=make_pair(make_pair(13,30),make_pair(15,30));
	data[3][8][1]=make_pair(make_pair(15,30),make_pair(19,00));
	data[3][8][2]=make_pair(make_pair(6,00),make_pair(8,30));
	data[3][9][0]=make_pair(make_pair(9,30),make_pair(13,00));
	data[3][9][1]=make_pair(make_pair(13,00),make_pair(15,30));
	data[3][9][2]=make_pair(make_pair(15,30),make_pair(17,30));

	data[4][0][0]=make_pair(make_pair(4,30),make_pair(7,13));
	data[4][0][1]=make_pair(make_pair(9,20),make_pair(12,45));
	data[4][0][2]=make_pair(make_pair(11,00),make_pair(14,30));
    data[4][0][3]=make_pair(make_pair(17,10),make_pair(20,25));
	data[4][1][0]=make_pair(make_pair(5,15),make_pair(7,45));
	data[4][1][1]=make_pair(make_pair(8,50),make_pair(11,20));
	data[4][1][2]=make_pair(make_pair(11,20),make_pair(13,50));
	data[4][1][3]=make_pair(make_pair(18,15),make_pair(21,20));
	data[4][2][0]=make_pair(make_pair(7,55),make_pair(8,58));
	data[4][2][1]=make_pair(make_pair(11,00),make_pair(12,45));
	data[4][2][2]=make_pair(make_pair(16,45),make_pair(18,40));
	data[4][2][3]=make_pair(make_pair(19,30),make_pair(21,15));
	data[4][3][0]=make_pair(make_pair(5,30),make_pair(6,45));
	data[4][3][1]=make_pair(make_pair(7,15),make_pair(8,30));
	data[4][3][2]=make_pair(make_pair(9,30),make_pair(10,45));
	data[4][3][3]=make_pair(make_pair(11,20),make_pair(12,45));
	data[4][3][4]=make_pair(make_pair(14,30),make_pair(15,45));
	data[4][3][5]=make_pair(make_pair(19,30),make_pair(20,45));
	data[4][5][0]=make_pair(make_pair(6,00),make_pair(7,55));
	data[4][5][1]=make_pair(make_pair(8,40),make_pair(10,35));
	data[4][5][2]=make_pair(make_pair(12,05),make_pair(14,00));
	data[4][5][3]=make_pair(make_pair(16,05),make_pair(17,50));
	data[4][7][0]=make_pair(make_pair(9,30),make_pair(13,30));
	data[4][7][1]=make_pair(make_pair(11,02),make_pair(15,02));
	data[4][7][2]=make_pair(make_pair(11,17),make_pair(15,17));
	data[4][8][0]=make_pair(make_pair(12,35),make_pair(13,05));
	data[4][8][1]=make_pair(make_pair(10,30),make_pair(13,00));
	data[4][8][2]=make_pair(make_pair(14,07),make_pair(14,30));
	data[4][9][0]=make_pair(make_pair(16,30),make_pair(18,07));
	data[4][9][1]=make_pair(make_pair(10,00),make_pair(11,47));
	data[4][9][2]=make_pair(make_pair(12,30),make_pair(14,07));

	data[5][0][0]=make_pair(make_pair(4,40),make_pair(9,40));
	data[5][0][1]=make_pair(make_pair(11,30),make_pair(16,30));
	data[5][0][2]=make_pair(make_pair(18,00),make_pair(23,00));
	data[5][0][3]=make_pair(make_pair(12,45),make_pair(17,29));
	data[5][1][0]=make_pair(make_pair(5,30),make_pair(8,10));
	data[5][1][1]=make_pair(make_pair(10,50),make_pair(13,50));
	data[5][1][2]=make_pair(make_pair(12,10),make_pair(15,00));
	data[5][1][3]=make_pair(make_pair(16,20),make_pair(19,00));
	data[5][2][0]=make_pair(make_pair(5,20),make_pair(6,50));
	data[5][2][1]=make_pair(make_pair(8,10),make_pair(10,00));
	data[5][2][2]=make_pair(make_pair(12,40),make_pair(14,50));
	data[5][2][3]=make_pair(make_pair(16,20),make_pair(18,20));
	data[5][3][0]=make_pair(make_pair(10,30),make_pair(13,20));
	data[5][3][1]=make_pair(make_pair(15,30),make_pair(18,30));
	data[5][3][2]=make_pair(make_pair(6,30),make_pair(9,00));
	data[5][4][0]=make_pair(make_pair(14,25),make_pair(16,20));
	data[5][4][1]=make_pair(make_pair(12,20),make_pair(14,00));
	data[5][4][2]=make_pair(make_pair(10,00),make_pair(12,00));
	data[5][4][3]=make_pair(make_pair(5,30),make_pair(7,30));
	data[5][6][0]=make_pair(make_pair(5,30),make_pair(6,30));
	data[5][6][1]=make_pair(make_pair(6,00),make_pair(7,10));
	data[5][6][2]=make_pair(make_pair(11,30),make_pair(12,30));
	data[5][6][3]=make_pair(make_pair(16,30),make_pair(17,30));
	data[5][7][0]=make_pair(make_pair(12,15),make_pair(17,05));
	data[5][7][1]=make_pair(make_pair(10,20),make_pair(15,00));
	data[5][7][2]=make_pair(make_pair(13,15),make_pair(18,15));
	data[5][8][0]=make_pair(make_pair(15,30),make_pair(19,30));
	data[5][8][1]=make_pair(make_pair(5,30),make_pair(9,30));
	data[5][8][2]=make_pair(make_pair(7,10),make_pair(11,10));



	data[6][1][0]=make_pair(make_pair(6,30),make_pair(8,30));
	data[6][1][1]=make_pair(make_pair(9,10),make_pair(11,00));
	data[6][1][2]=make_pair(make_pair(13,40),make_pair(15,40));
	data[6][2][0]=make_pair(make_pair(5,40),make_pair(8,40));
	data[6][2][1]=make_pair(make_pair(9,40),make_pair(12,40));
	data[6][2][2]=make_pair(make_pair(14,40),make_pair(17,40));
	data[6][3][0]=make_pair(make_pair(8,30),make_pair(11,30));
	data[6][3][1]=make_pair(make_pair(12,30),make_pair(15,30));
	data[6][3][2]=make_pair(make_pair(16,20),make_pair(19,30));
	data[6][4][0]=make_pair(make_pair(8,30),make_pair(10,30));
	data[6][4][1]=make_pair(make_pair(13,00),make_pair(15,00));
	data[6][4][2]=make_pair(make_pair(4,00),make_pair(6,00));
	data[6][5][0]=make_pair(make_pair(5,30),make_pair(6,30));
	data[6][5][1]=make_pair(make_pair(9,10),make_pair(10,30));
	data[6][5][2]=make_pair(make_pair(13,50),make_pair(15,00));
	data[6][5][3]=make_pair(make_pair(16,30),make_pair(17,30));
	data[6][9][0]=make_pair(make_pair(9,30),make_pair(12,10));


	data[7][0][0]=make_pair(make_pair(4,00),make_pair(6,50));
	data[7][0][1]=make_pair(make_pair(5,30),make_pair(8,30));
	data[7][0][2]=make_pair(make_pair(10,00),make_pair(13,50));
	data[7][2][0]=make_pair(make_pair(10,00),make_pair(14,30));
	data[7][2][1]=make_pair(make_pair(14,10),make_pair(18,50));
	data[7][2][2]=make_pair(make_pair(15,25),make_pair(19,30));
	data[7][3][0]=make_pair(make_pair(9,20),make_pair(12,10));
	data[7][3][1]=make_pair(make_pair(13,30),make_pair(16,10));
	data[7][3][2]=make_pair(make_pair(7,20),make_pair(10,00));
	data[7][4][0]=make_pair(make_pair(13,00),make_pair(15,50));
	data[7][4][1]=make_pair(make_pair(11,10),make_pair(14,00));
	data[7][4][2]=make_pair(make_pair(9,00),make_pair(11,50));
	data[7][8][0]=make_pair(make_pair(11,40),make_pair(15,55));

	data[8][0][0]=make_pair(make_pair(6,35),make_pair(8,45));
	data[8][0][1]=make_pair(make_pair(11,25),make_pair(13,30));
	data[8][0][2]=make_pair(make_pair(13,00),make_pair(15,10));
	data[8][1][0]=make_pair(make_pair(8,30),make_pair(9,34));
	data[8][1][1]=make_pair(make_pair(14,50),make_pair(15,55));
	data[8][1][2]=make_pair(make_pair(13,40),make_pair(14,45));
	data[8][2][0]=make_pair(make_pair(7,20),make_pair(9,40));
	data[8][2][1]=make_pair(make_pair(10,30),make_pair(12,50));
	data[8][2][2]=make_pair(make_pair(13,40),make_pair(15,55));
	data[8][3][0]=make_pair(make_pair(8,30),make_pair(10,45));
	data[8][3][1]=make_pair(make_pair(13,10),make_pair(15,30));
	data[8][3][2]=make_pair(make_pair(15,30),make_pair(17,40));
	data[8][4][0]=make_pair(make_pair(6,00),make_pair(8,30));
	data[8][4][1]=make_pair(make_pair(9,30),make_pair(12,30));
	data[8][4][2]=make_pair(make_pair(13,00),make_pair(15,50));
	data[8][5][0]=make_pair(make_pair(9,30),make_pair(13,55));
	data[8][5][1]=make_pair(make_pair(11,00),make_pair(15,10));
	data[8][7][0]=make_pair(make_pair(5,55),make_pair(11,10));
    data[8][9][0]=make_pair(make_pair(6,00),make_pair(7,10));
	data[8][9][1]=make_pair(make_pair(8,50),make_pair(10,05));
	data[8][9][2]=make_pair(make_pair(13,00),make_pair(14,05));


	data[9][0][0]=make_pair(make_pair(8,10),make_pair(10,50));
	data[9][0][1]=make_pair(make_pair(11,30),make_pair(14,30));
	data[9][0][2]=make_pair(make_pair(14,10),make_pair(17,30));
	data[9][1][0]=make_pair(make_pair(8,30),make_pair(10,30));
	data[9][1][1]=make_pair(make_pair(11,50),make_pair(13,35));
	data[9][1][2]=make_pair(make_pair(17,00),make_pair(19,00));
	data[9][2][0]=make_pair(make_pair(6,30),make_pair(9,40));
	data[9][2][1]=make_pair(make_pair(12,20),make_pair(15,30));
	data[9][2][2]=make_pair(make_pair(15,30),make_pair(18,07));
	data[9][3][0]=make_pair(make_pair(6,00),make_pair(7,55));
	data[9][3][1]=make_pair(make_pair(9,05),make_pair(11,00));
	data[9][3][2]=make_pair(make_pair(13,00),make_pair(15,55));
	data[9][4][0]=make_pair(make_pair(15,30),make_pair(17,00));
	data[9][4][1]=make_pair(make_pair(18,30),make_pair(20,05));
	data[9][5][0]=make_pair(make_pair(8,00),make_pair(10,40));
	data[9][5][1]=make_pair(make_pair(10,30),make_pair(13,10));
	data[9][5][2]=make_pair(make_pair(12,50),make_pair(15,30));
	data[9][7][0]=make_pair(make_pair(8,30),make_pair(11,40));
	data[9][8][0]=make_pair(make_pair(6,00),make_pair(8,50));
	data[9][8][1]=make_pair(make_pair(9,30),make_pair(11,45));
	data[9][8][2]=make_pair(make_pair(13,00),make_pair(15,50));
}
 int num[10][10];
    {
    num[0][1]=3;
    num[0][2]=4;
    num[0][3]=3;
    num[0][4]=3;
    num[0][5]=4;
    num[0][6]=0;
    num[0][7]=3;
    num[0][8]=2;
    num[0][9]=0;
    num[1][0]=4;
    num[1][2]=4;
    num[1][3]=3;
    num[1][4]=4;
    num[1][5]=4;
    num[1][6]=5;
    num[1][7]=3;
    num[1][8]=3;
    num[1][9]=2;
    num[2][0]=3;
    num[2][1]=3;
    num[2][3]=3;
    num[2][4]=3;
    num[2][5]=3;
    num[2][6]=3;
    num[2][7]=3;
    num[2][8]=3;
    num[2][9]=3;
    num[3][0]=3;
    num[3][1]=3;
    num[3][2]=3;
    num[3][4]=3;
    num[3][5]=3;
    num[3][6]=3;
    num[3][7]=3;
    num[3][8]=3;
    num[3][9]=3;
    num[4][0]=4;
    num[4][1]=4;
    num[4][2]=4;
    num[4][3]=6;
    num[4][5]=4;
    num[4][6]=0;
    num[4][7]=3;
    num[4][8]=3;
    num[4][9]=3;
    num[5][0]=4;
    num[5][1]=4;
    num[5][2]=4;
    num[5][3]=3;
    num[5][4]=4;
    num[5][6]=4;
    num[5][7]=3;
    num[5][8]=3;
    num[5][9]=0;
    num[6][0]=0;
    num[6][1]=3;
    num[6][2]=3;
    num[6][3]=3;
    num[6][4]=3;
    num[6][5]=4;
    num[6][7]=0;
    num[6][8]=0;
    num[6][9]=1;
    num[7][0]=3;
    num[7][1]=0;
    num[7][2]=3;
    num[7][3]=3;
    num[7][4]=3;
    num[7][5]=0;
    num[7][6]=0;
    num[7][8]=1;
    num[7][9]=0;
    num[8][0]=3;
    num[8][1]=3;
    num[8][2]=3;
    num[8][3]=3;
    num[8][4]=3;
    num[8][5]=2;
    num[8][6]=0;
    num[8][7]=1;
    num[8][9]=3;
    num[9][0]=3;
    num[9][1]=3;
    num[9][2]=3;
    num[9][3]=3;
    num[9][4]=2;
    num[9][5]=3;
    num[9][6]=0;
    num[9][7]=1;
    num[9][8]=3;
}

    cout<<"ENTER SOURCE AND DESTINATION=";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"ENTER STARTING TIME IN HH MM=";
    int h,m;
    cin>>h>>m;

    int reach[10]={0};
    pair<int,int> time[10];
    for(int i=0;i<10;i++){
        time[i]=make_pair(24,0);
    }
    time[a]=make_pair(h,m);
    int miin;
    int parent[10]={0};
    float cm=1.5;
    int total[10]={0};

    while(reach[b]==0){
        miin=-1;
        for(int i=0;i<10;i++){
            if(miin==-1){
                if(reach[i]==0){
                    miin=i;
                }
            }
            else{
                if(reach[i]==0){
                    if(time[i].first<time[miin].first)
                        miin=i;
                    else if(time[i].first==time[miin].first&&time[i].second<time[miin].second)
                        miin=i;
                }
            }
        }
        reach[miin]=1;
        //cout<<miin<<" ";
        for(int i=0;i<10;i++){
            int x=-1;
            int f1=-1;
            if(i!=miin){
                for(int j=0;j<num[miin][i];j++){
                        //cout<<miin<<" ";

                    if(x==-1){
                        //cout<<i<<" "<<j<<" ";
                        if(data[miin][i][j].first.first>time[miin].first)
                            x=j;
                        else if(data[miin][i][j].first.first==time[miin].first&&data[miin][i][j].first.second>=time[miin].second)
                            x=j;
                    }
                    else{
                        if(data[miin][i][j].first.first>time[miin].first){
                            //cout<<i<<" "<<j;
                            if(data[miin][i][j].first.first<time[i].first)
                                x=j;
                            else if(data[miin][i][j].first.first==time[i].first&&data[miin][i][j].first.second<=time[i].second)
                                x=j;
                        }
                        else if(data[miin][i][j].first.first==time[miin].first&&data[miin][i][j].first.second>=time[miin].second){
                            if(data[miin][i][j].first.first<time[i].first)
                                x=j;
                            else if(data[miin][i][j].first.first==time[i].first&&data[miin][i][j].first.second<=time[i].second)
                                x=j;
                        }
                    }
                    if(x!=-1){
                        if(time[i].first>data[miin][i][x].second.first){
                            time[i]=make_pair(data[miin][i][x].second.first,data[miin][i][x].second.second);
                            //cout<<miin<<" "<<i<<"  ";
                            parent[i]=miin;
                            f1=x;
                        }
                        else if(time[i].first==data[miin][i][x].second.first&&time[i].second>=data[miin][i][x].second.second){
                            time[i]=make_pair(data[miin][i][x].second.first,data[miin][i][x].second.second);
                            //cout<<miin<<" "<<i<<"   ";
                            parent[i]=miin;
                            f1=x;
                        }
                        //cout<<i<<" "<<time[i].first;
                    }

                }

                if(f1!=-1){
                    total[i]=total[miin]+(td(make_pair(data[miin][i][f1].first.first,data[miin][i][f1].first.second),make_pair(data[miin][i][f1].second.first,data[miin][i][f1].second.second)));
                    //cout<<total[i]<<" "<<miin<<i<<" "<<f1<<"  ";
                }
            }
        }

    }
    int p=0;
    int q=b;
    int par[10];
    while(q!=a){
        par[p]=q;
        p++;
        q=parent[q];
    }
    par[p]=a;

    {
        cout<<"\nYOU CAN REACH DESTINATION AT "<<time[miin].first<<" HOUR AND "<<time[miin].second<<" MIN VIA=";

        for(int i=p;i>=0;i--){
            cout<<par[i]<<" ";
        }

        cout<<" AND TOTAL COST  \nCONSIDERING Rs. 1.5 PER MIN WOULD BE APPROXIMATELY=Rs. "<<cm*float(total[miin])<<" ";
    }




    time[a]=make_pair(h,m);
    int x=-1;
    time[b]=make_pair(24,0);
    miin=a;
    int i=b;
    int f=-1;
    for(int j=0;j<num[miin][i];j++){
                        //cout<<miin<<" ";

                    if(x==-1){
                        //cout<<i<<" "<<j<<" ";
                        if(data[miin][i][j].first.first>time[miin].first)
                            x=j;
                        else if(data[miin][i][j].first.first==time[miin].first&&data[miin][i][j].first.second>=time[miin].second)
                            x=j;
                    }
                    else{
                        if(data[miin][i][j].first.first>time[miin].first){
                            //cout<<i<<" "<<j;
                            if(data[miin][i][j].first.first<time[i].first)
                                x=j;
                            else if(data[miin][i][j].first.first==time[i].first&&data[miin][i][j].first.second<=time[i].second)
                                x=j;
                        }
                        else if(data[miin][i][j].first.first==time[miin].first&&data[miin][i][j].first.second>=time[miin].second){
                            if(data[miin][i][j].first.first<time[i].first)
                                x=j;
                            else if(data[miin][i][j].first.first==time[i].first&&data[miin][i][j].first.second<=time[i].second)
                                x=j;
                        }
                    }
                    if(x!=-1){
                        if(time[i].first>data[miin][i][x].second.first){
                            time[i]=make_pair(data[miin][i][x].second.first,data[miin][i][x].second.second);
                            //cout<<miin<<" "<<j<<"  ";
                            f=x;

                        }
                        else if(time[i].first==data[miin][i][x].second.first&&time[i].second>=data[miin][i][x].second.second){
                            time[i]=make_pair(data[miin][i][x].second.first,data[miin][i][x].second.second);
                            //cout<<miin<<" "<<j<<"   ";
                            f=x;
                        }
                        //cout<<i<<" "<<time[i].first;
                    }

                }

    if(x==-1){
        cout<<"\n\nNO DIRECT BUS AVAILABLE\n";
    }
    else{
        cout<<"\n\nOR YOU CAN GET A DIRECT BUS AT="<<data[a][b][f].first.first<<" HOURS AND "<<data[a][b][f].first.second<<" MIN AND REACH BY "<<data[a][b][f].second.first<<" HOUR "<<data[a][b][f].second.second<<" MIN ";
    }



	return 0;
}
