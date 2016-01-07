#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

class FileManager
{
	public:
		FileManager();
		~FileManager();
		
		void LoadContent(const char* filename, 
					vector< vector<string> > &attributes,
					vector< vector<string> > &contents);
	protected:
};

#endif
