//============================================================================
// Name        : random.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <ctime>
#define tno 30
#define sno 100
using namespace std;

int main() {

	FILE *fout;
	 //fin=fopen("/Users/cafe3165/Desktop/in.txt","rb");
	 fout=fopen("/Users/cafe3165/Desktop/randon_out1.txt","wb");



	srand(time(0));
	int ini = 313;
	int t[tno];
	for (int i = 1; i <= tno; i++)
		t[i] = i;

	fprintf(fout,"%d\n",sno);
	for (int i = 0; i < sno; i++) {
		ini++;
		double c = 2.5;
		string s="031402";
		cout << s << ini << " ";
		c += (rand() % 10) / 10.0;
		cout << c << " ";
		int o1, o2, o3, o4, o5;
		o1 = rand() % tno;
		o2 = rand() % tno;
		o3 = rand() % tno;
		o4 = rand() % tno;
		o5 = rand() % tno;
		if(t[o1]>tno||t[o1]<0) t[o1]=tno;
		if(t[o2]>tno||t[o2]<0) t[o2]=tno;
		if(t[o3]>tno||t[o3]<0) t[o3]=tno;
		if(t[o4]>tno||t[o4]<0) t[o4]=tno;
		if(t[o5]>tno||t[o5]<0) t[o5]=tno;
		cout << t[o1] << " " << t[o2] << " " << t[o3] << " " << t[o4] << " "
				<< t[o5];
		cout << endl;


		fprintf(fout,"%s%d %lf %d %d %d %d %d \n",s.c_str(),ini,c,t[o1],t[o2],t[o3],t[o4],t[o5]);
	}

	fprintf(fout,"%d",tno);
	 //fclose(fin);
	 fclose(fout);
	return 0;
}
