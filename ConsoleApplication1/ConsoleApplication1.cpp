#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queues_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	void insret() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		// Cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}

		// cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			// Jika Rear berada diposisi terakhir array, kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
	}
};