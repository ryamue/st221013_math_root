#include "main.h"

int main() {

	double area = 4;
	double length = 0;

	int in = 0;

	while (1) {
		// 入力
		if (_kbhit()) {
			// 取り出し
			in = _getch();
			// qの入力で終了
			if (in == 'q') break;

			// a, d以外の入力を受け付けない
			if (in != 'a' && in != 'd') continue;

			// a, dの入力で面積を増減
			if (in == 'a') area -= 0.1;
			if (in == 'd') area += 0.1;

			// 面積が0以下の場合0.1にする
			if (area <= 0) area = 0.1;

			// 平方根の計算
			length = sqrt(area);

			// 出力
			cout << "--------------------" << endl;
			cout << "area : " << area << endl;
			cout << "√" << area << " : " << length << endl;
		}
	}

	return 0;
}