#ifndef DOCMANAGER_H
#define DOCMANAGER_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class DocumentManager {
	public:
    	void createDocument(const std::string& filename);
    	void editDocument(const std::string& filename);
    	void viewDocument(const std::string& filename);
    	void showDocuments(const std::vector<std::string>& files);
};
#endif
