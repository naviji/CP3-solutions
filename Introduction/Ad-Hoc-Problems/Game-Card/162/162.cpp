#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <set>

using namespace std;

#define ll long long
#define ld long double
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii> 
#define pb push_back
const int INF = 1000000009;
const ld EPS = 10e-9;

bool face_card(string& card) {
	if (card[1]=='J' ||
		card[1]=='Q' ||
		card[1]=='K' ||
		card[1]=='A')
		return true;
}

int main() {
	stack<string> player[2];
	stack<string> dealt;
	
	string s;

	// 0 dealer 1 no dealer	
	int turn = 1;
	bool in_sequence = false;
	int to_deal = 1;

	while (cin >> s, s!="#") {
		player[turn].push(s);
		turn = !turn;
	}

	bool play = true;	
	while (play) {
/*		if (turn) 
			printf("No dealer turn\n");
		else
			printf("Dealer turn\n");
*/
//		printf("%d %d %d\n", player[0].size(),
//				player[1].size(),
//				dealt.size());

		while (to_deal) {
			if (!player[turn].empty()) {
				dealt.push(player[turn].top());
				player[turn].pop();

				string card = dealt.top();
//				printf("played %s\n", card.c_str());
				
				if (face_card(card))
					in_sequence = true;

				if (card[1] == 'J') 
					to_deal = 1;
				else if (card[1] == 'Q')
					to_deal = 2;
				else if (card[1] == 'K')
					to_deal = 3;
				else if (card[1] == 'A')
					to_deal = 4;

				if (in_sequence && face_card(card)) {
//					printf("IN SEQUENCE %s\n",
//							card.c_str());
					break;
				}
			}
			else {
//				printf("Stop\n");
				play = false;
				break;
			}
			to_deal--;
		}

		if (in_sequence && (to_deal==0)) {
//			printf("OUT SEQUENCE\n");
			in_sequence = false;
			stack<string> temp;
			while (!player[!turn].empty()) {
				temp.push(player[!turn].top());
				player[!turn].pop();
			}
			while (!dealt.empty()) {
				player[!turn].push(dealt.top());
				dealt.pop();
			}

			while (!temp.empty()) {
				player[!turn].push(temp.top());
				temp.pop();
			}
			
		}

		if (!in_sequence)
			to_deal = 1;
		turn = !turn;
	}
	if (player[0].empty()) {
		printf("2 %3lu\n", player[1].size());
	}
	else {
		printf("1 %3lu\n", player[0].size());
	}

//	printf("%d %d\n", player[0].size(), player[1].size());

//	printf("%d\n", dealt.size());

	//cout << player[0].top() << " " << player[1].top() << endl;
	return 0;	
}

