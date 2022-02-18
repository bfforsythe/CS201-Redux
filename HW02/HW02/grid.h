#pragma once

void planeInit() {

	int length = 0, width = 0;
	int total = (length * width);
	int k = 0;


	cout << "\n Please Enter Rows and Columns to Generate a field\n";
	cin >> length >> width;

	for (int j = 0; j < width; j++) {

		for (int i = 0; i < length; i++) {

			cout << " . ";
		}
		cout << "\n";
	}

}

