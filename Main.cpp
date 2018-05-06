#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Item {
	string word;
	string meaning;
};

void loadData(char file[], Item dat[], int &n) {
	ifstream fi(file);
	if (!fi.is_open()) {
		cout << "Khong mo duoc file de tu dien" << endl;
		return;
	}
	string s;
	int b, e;
	n = 0;
	while (!fi.eof()) {
		getline(fi, s);
		b = s.find("\t");
		if (b < 0)
			continue;
		dat[n].word = s.substr(0, b);
		s = s.substr(b + 1);
		while ((b = s.find("|=")) > -1) {
			s.replace(b, 2, "\n");
		}
		dat[n].meaning = s;
		n++;
	}
	fi.close();
}

void saveData(char file[], Item dat[], int n) {
	ofstream fo(file);
	if (!fo.is_open()) {
		cout << "Khong mo duoc file de ghi" << endl;
		return;
	}
	string s;
	int b;
	for (int i = 0; i < n; i++) {
		while ((b = dat[i].meaning.find("\n")) > -1)
			dat[i].meaning.replace(b, 2, "|=");
		fo << dat[i].word << "\t" << dat[i].meaning << endl;
	}
	fo.flush();
	fo.close();
}

void sortBySelection(Item dat[], int n) {
	// Cai dat code Chon Truc Tiep o day

	// ---------------------------
}

void sortByInsertion(Item dat[], int n) {
	// Cai dat code Chen Truc Tiep o day

	// ---------------------------
}

void sortByInterchange(Item dat[], int n) {
	// Cai dat code Doi Cho Truc Tiep o day

	// ---------------------------
}

void sortByBubble(Item dat[], int n) {
	// Cai dat code Sap xep Noi Bot o day

	// ---------------------------
}

void sortByHeap(Item dat[], int n) {
	// Cai dat code Sap xep Vun Dong o day

	// ---------------------------
}

void sortByMerge(Item dat[], int n) {
	// Cai dat code Sap xep Tron o day

	// ---------------------------
}

void sortByQuick(Item dat[], int n) {
	// Cai dat code Sap xep Nhanh o day

	// ---------------------------
}

void sortByShell(Item dat[], int n) {
	// Cai dat code Sap xep Chen Voi Buoc Nhay Giam Dan o day

	// ---------------------------
}

void sortByRadix(Item dat[], int n) {
	// Cai dat code Sap xep Co So o day

	// ---------------------------
}

int main() {
	Item *data = new Item[13375];
	int n;
	clock_t start;
	start = clock();
	cout << "Tai du lieu tu dien" << endl;
	loadData("mcomputer.txt", data, n);
	cout << "Tong so tu vung: " << n << endl;
	cout << "Thoi gian tai du lieu: " << clock() - start << "ms" << endl;
	string word;
	start = clock();
	// Goi ham sap xep

	// ------------------------------
	cout << "Thoi gian sap xep: " << clock() - start << "ms" << endl;
	saveData("mcomputer.txt", data, n);
	system("pause");
	return 0;
}