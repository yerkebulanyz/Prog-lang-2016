#include <iostream>

using namespace std;

string s[] = {
"  __  ___   __     __       _        _           _             ",
" /_ |/ _ \\  \\ \\   / /      | |      | |         | |            ",
"  | | (_) |  \\ \\_/ /__ _ __| | _____| |__  _   _| | __ _ _ __  ",
"  | |> _ <    \\   / _ \\ '__| |/ / _ \\ '_ \\| | | | |/ _` | '_ \\ ",
"  | | (_) |    | |  __/ |  |   <  __/ |_) | |_| | | (_| | | | |",
"  |_|\\___/     |_|\\___|_|  |_|\\_\\___|_.__/ \\__,_|_|\\__,_|_| |_|",
"                                                               ",
"                                                               "
};

int main () {                  
	for (int j = 0; j < 3; ++j)
		for (int i = 0; i < 8; ++i) {
			cout << s[i] << " ";
		cout << endl;
	}
	return 0;
}
     	