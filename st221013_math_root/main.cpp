#include "main.h"

int main() {

	double area = 4;
	double length = 0;

	int in = 0;

	while (1) {
		// ����
		if (_kbhit()) {
			// ���o��
			in = _getch();
			// q�̓��͂ŏI��
			if (in == 'q') break;

			// a, d�ȊO�̓��͂��󂯕t���Ȃ�
			if (in != 'a' && in != 'd') continue;

			// a, d�̓��͂Ŗʐς𑝌�
			if (in == 'a') area -= 0.1;
			if (in == 'd') area += 0.1;

			// �ʐς�0�ȉ��̏ꍇ0.1�ɂ���
			if (area <= 0) area = 0.1;

			// �������̌v�Z
			length = sqrt(area);

			// �o��
			cout << "--------------------" << endl;
			cout << "area : " << area << endl;
			cout << "��" << area << " : " << length << endl;
		}
	}

	return 0;
}