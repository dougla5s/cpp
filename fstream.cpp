#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>

using namespace std;
namespace fs = std::filesystem;

class Log {
	public:
		size_t found(fs::path File) {
			cout << "FOUND " << File.filename() << " WITH <" << File.extension().string() << "> EXTENSION" << '\n';
			return 0;
		}
		size_t rename(fs::path before, fs::path after) {
			cout << "RENAMED " << before.filename() << " WITH " << after.filename();
			return 0;
		}
};

void searchInDirectory (fs::path path) {
	size_t filesNumber = distance(fs::directory_iterator(path), fs::directory_iterator{});
	// Sum of files inside path

	Log output = Log();

	for (const auto &i : fs::directory_iterator(path)) { // search inside USERPATH directory for files
		auto currentFile = i.path();
		output.found(currentFile);
	}
}

int main() {
	// path fileDir = "popo";
	//  if (!exists(fileDir)) { 
    //     create_directory(fileDir); 
    //     cout << "Directory created: " << fileDir << endl; 
    // }

	// for (int i = 0; i < 4; ++i) {
	// 	string filename = "example" + to_string(i) + ".txt";

	// 	path filePath = fileDir / filename;

	// 	ofstream file (filePath);
	// 	if (file.is_open()) {
	// 		file << "Asylum\ns\ns";
	// 		cout << "file write succesful " << filePath;
	// 		file.close();
	// 	}
	// }

	fs::path userPath;
	cout << "Enter directory: ";
	cin >> userPath;
	fs::path customPath = fs::current_path()/userPath;directory_iterator
	if (exists(customPath)) {
		
		searchInDirectory(customPath);
		
		cout << "Enter new filename template: <example{i}>";
		string NEWFILENAME;
		cin >> NEWFILENAME;
	} else {
		cerr << "Cannot get that directory. ";
	}
	return 0;
}