#include "DocManager.h"
int main () {
	DocumentManager docManager;
    	std::vector<std::string> files;

    	int choice;
    	while (true) {
        	std::cout << "\nМеню:\n";
        	std::cout << "1. Создать документ\n";
        	std::cout << "2. Редактировать документ\n";
        	std::cout << "3. Просмотреть документ\n";
        	std::cout << "4. Показать доступные документы\n";
        	std::cout << "5. Выйти\n";
        	std::cout << "Выберите действие: ";
        	std::cin >> choice;
        	std::cin.ignore(); // clear input buffer

        	switch (choice) {
            		case 1: {
                		std::string filename;
                		std::cout << "Введите имя файла: ";
                		std::getline(std::cin, filename);
                		docManager.createDocument(filename);
                		files.push_back(filename);
                		break;
            		}
            		case 2: {
                		if (files.empty()) {
                    			std::cout << "Нет доступных документов для редактирования.\n";
                		} else {
                    			std::string filename;
                    			docManager.showDocuments(files);
                    			std::cout << "Выберите документ для редактирования: ";
                    			std::getline(std::cin, filename);
                    			docManager.editDocument(filename);
                		}
                		break;
            		}
            		case 3: {
                		if (files.empty()) {
                    			std::cout << "Нет доступных документов для просмотра.\n";
                		} else {
                    			std::string filename;
                    			docManager.showDocuments(files);
                    			std::cout << "Выберите документ для просмотра: ";
                    			std::getline(std::cin, filename);
                    			docManager.viewDocument(filename);
                		}
                		break;
            		}
            		case 4: {
                		docManager.showDocuments(files);
                		break;
            		}
            		case 5: {
                		std::cout << "Программа завершена.\n";
                		return 0;
            		}
            		default:
                		std::cout << "Некорректный выбор. Пожалуйста, выберите от 1 до 5.\n";
                		break;
        	}
    	}

    return 0;
}
