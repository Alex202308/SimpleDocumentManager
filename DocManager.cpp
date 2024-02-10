#include "DocManager.h"
void DocumentManager::createDocument(const std::string& filename) {
        std::ofstream file(filename);
        if (file.is_open()) {
            	std::cout << "Документ \"" << filename << "\" успешно создан.\n";
        } else {
            	std::cout << "Не удалось создать документ \"" << filename << "\".\n";
        }
}

void DocumentManager::editDocument(const std::string& filename) {
        std::ofstream file(filename, std::ios::app);
        if (file.is_open()) {
            	std::string text;
            	std::cout << "Введите текст для добавления в документ (введите 'exit', чтобы завершить):\n";
            	while (true) {
                	std::getline(std::cin, text);
                	if (text == "exit") {
                    		break;
                	}
                	file << text << std::endl;
            	}
            	std::cout << "Текст успешно добавлен в документ \"" << filename << "\".\n";
        } else {
            	std::cout << "Не удалось открыть документ \"" << filename << "\" для редактирования.\n";
        }
}

void DocumentManager::viewDocument(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            	std::string line;
            	std::cout << "Содержимое документа \"" << filename << "\":\n";
            	while (std::getline(file, line)) {
                	std::cout << line << std::endl;
            	}
        } else {
            	std::cout << "Не удалось открыть документ \"" << filename << "\" для просмотра.\n";
        }
}

void DocumentManager::showDocuments(const std::vector<std::string>& files) {
	if (files.empty()) {
            	std::cout << "Нет доступных документов.\n";
        } else {
            	std::cout << "Доступные документы:\n";
            	for (const auto& file : files) {
                	std::cout << file << std::endl;
            	}
        }
}


