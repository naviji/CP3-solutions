#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <sstream>

using namespace std;


bool user[110];
bool solved[110][10];
int incorrect[110][10];
int tsolve[110][10];

struct participant {
	int id;
	int solved;
	int penalty;
};

int get_solved(int id) {
	int sum =0;
	for (int i=1; i<10; i++) {
		if (solved[id][i] == true)
			sum++;
	}
	return sum;
}

int get_penalty(int id) {
	int tp = 0;
	for (int i=1; i<=10; i++) {
		if (solved[id][i]==true) {
			tp += tsolve[id][i];
			tp += incorrect[id][i]*20;
		}
	}
	return tp;
}

bool compareParticipants(participant a, participant b){   
	if (a.solved != b.solved)
		return b.solved < a.solved; // solved desc order
	if (a.penalty != b.penalty)
		return a.penalty < b.penalty;//  penalty asc order
	return a.id < b.id; // id asc order

}   

int main() {
	stringstream ss;
	vector<participant> v;
	int id, problem, time;
        char code, c;
	int n;
	string str;

	scanf("%d\n\n", &n);
	int i=0;
	while (i<n) {
		if (i>0) printf("\n");	
		memset(user, false, sizeof(user));
		memset(solved, false, sizeof(solved));
		memset(incorrect, 0, sizeof(incorrect));
		memset(tsolve, 0, sizeof(tsolve));
		v.clear();
		while (getline(cin, str)) {
		        if (str.empty()) break;
			ss << str;
	       		ss >> id >> problem >> time >> code;
			user[id] = true;	
			if (code == 'C') {
				solved[id][problem] = true;
				tsolve[id][problem] = time;
		       	}
			if (code == 'I') {
				incorrect[id][problem]++;
			}
		}

		for (int i=1; i<=100; i++) {
			if (user[i] == true) {
				v.push_back({i, get_solved(i), get_penalty(i)});
			}
		}

		sort(v.begin(), v.end(), compareParticipants);
		
		for (auto p : v) {
			printf("%d %d %d\n", p.id, p.solved, p.penalty);
		}
		i++;
	}
}



