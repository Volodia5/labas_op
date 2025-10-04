#include using namespace std;

int main() {
	long long a, product = 1, biggest = -1e9;
	int index = 0, count = 0;

	cout << "����� ����� ����� (0 ����� ���������): " << endl;

	while (true) {
		cin >> a;
		if (a == 0) break;

		count++;

		if (a > 0 && a % 5 != 0) {
			product *= a;
			if (a > biggest) {
				biggest = a;
				index = count;
			}
		}
	}

	if (index == 0) {
		cout << "�� ������� ������ �����" << endl;
	}
	else {
		cout << "������������ = " << product << endl;
		cout << "����� ������� ����� = " << biggest << endl;
		cout << "����� ����� ����� = " << index << endl;
	}

	long long n;
	cout << "������ ����� ����� N : " cin >> n;

	long long odd_product = 1;
	bool found_odd = false;

	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 != 0) {
			odd_product *= digit;
			found_odd = true;
		}
		n /= 10;
	}

	if (!found_odd) odd_product = 0;
	cout << "������������ �������� ���� = " << odd_product;

	return 0;
}