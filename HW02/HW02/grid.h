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

	int x = 1, y = 1;
	while (x != 0 || y != 0) {
		cout << "Please make a move by inputting and x and y coordinate: ";

		cin >> x >> y;

		for (int j = 0; j < width; j++) {

			for (int i = 0; i < length; i++) {

				if (i == x - 1 && j == y - 1) {
					cout << " U ";
				}
				else {
					cout << " . ";
				}
			}
			cout << "\n";
		}
	}
}

