#pragma once

void planeInit() {

	int length, width = 0;
	int total = (length * width);
	int k = 0;


	cout << "\n Please Enter Rows and Columns to Generate a field\n";
	cin >> length >> width;

	for (int j = 0; j != total; j++) {

		

		if (k == length) {
			std::cout << "\n";
			k = 0;
		}

		k++;
		cout << " . ";

	}

	cout << "\n ";
}

