#include <iostream>
#include <string>
using namespace std;

int main() {
	int randomNum; // ����� �ϴ� 3�ڸ����� ���� ���� ����
	int firstNum; // ������ ù��° �ڸ���
	int secondNum; // ������ �ι�° �ڸ���
	int thirdNum; // ������ ����° �ڸ���

	while (1) {		
		randomNum = 192;//rand() % 900 + 100; // ������ 3�ڸ��� ����

		bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

		// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
		int first;
		int sec;
		int th;

		
		th=randomNum%10;
		first=randomNum/100;
		sec=(randomNum-first*100)/10;
		
		if(first!=sec||first!=th||sec!=th){
			same =true;
		}
		
		if (same == true) {
			break;
		}
	}

	int turn = 0;
	while (1) {
		cout << turn + 1 << " try " << endl;

		int userNumber; // ����ڰ� �Է��� ���ڸ��� ���� ����
		int guessFirst; // ������ ������ ù��° �ڸ���
		int guessSecond; // ������ ������ �ι�° �ڸ���
		int guessThird; // ������ ������ ����° �ڸ���


		// ����ڿ��� ���ڸ� ���� �Է¹޴� �ڵ� ���
		while (1) {
			cout << "enter the three number ";
			cin >> userNumber;

			bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����
			// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
			guessThird=userNumber%10;
	 		guessFirst=userNumber/100; 
			guessSecond=(userNumber-(guessFirst*100))/10; 

			if(guessFirst!=guessSecond&&guessFirst!=guessThird&&guessSecond!=guessThird){
			
			same =true;
			}
		


			if (to_string(userNumber).length() != 3) {
				cout << "not three number , enter again" << endl;
				continue;
			}

			if (same == true) {
				break;
			}
			cout<<"yournumber have same number "<<endl;
		}
		
		int strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
		int ball = 0; // �� ������ �����ϴ� ����
		
		// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
		int first;
		int sec;
		int th;
		th=randomNum%10;
		first=randomNum/100;
		sec=(randomNum-first*100)/10;
		int num[3];
		num[0]=first;
		num[1]=sec;
		num[2]=th;

		
		int user[3];
		user[0]=guessFirst;
		user[1]=guessSecond;
		user[2]=guessThird;

		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(user[i]==num[j]){
					if(i==j){
						strike++;
						break;
					}
					else{
						ball++;
					}
				}
			}
		}
		

		cout << userNumber << "'s result : " << strike << " strike, " << ball << "ball " << endl;
		
		if (strike == 3) {
			cout << "correct number, end game";
			break;
		}

		turn += 1;
	}

	return 0;
}
