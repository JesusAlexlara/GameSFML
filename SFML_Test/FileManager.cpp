#include "FileManager.h"

FileManager::FileManager()
{
}

FileManager::~FileManager()
{
}

void FileManager::LoadContent(const char* filename, 
			vector< vector<string> > &attributes,
			vector< vector<string> > &contents)
{
	ifstream openFile(filename);
	if(openFile.is_open())
	{
		while(!openFile.eof())
		{
			string line;
			getline(openFile, line);
			line.erase(remove(line.begin(), line.end(), ' '), line.end());
			
			cout << line << endl;
		}
	}
	else
	{
	}
}
