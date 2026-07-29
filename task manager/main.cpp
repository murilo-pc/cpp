#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> tasks = {"teste"};

void addTask() {
  std::string task;
  std::cout << "Nome da tarefa a ser adiconada: ";
  std::getline(std::cin, task);
  tasks.push_back(task);
}

int main() {
  int option;

  while (true) {
    std::cout << "===MENU PRINCIPAL===\n Digite alguma opção:\n";
    std::cout << "Digite o numero de uma tarefa para remove-la" << std::endl;
    for (int choice = 0; choice < tasks.size(); choice++) {
      std::cout << choice + 1 << "- " << tasks[choice] << std::endl;
    }
    std::cout << tasks.size() + 1 << "- adicionar nova tarefa" << std::endl;
    std::cout << " > ";
    std::cin >> option;
    std::cin.ignore();
    if (option == tasks.size() + 1) {
      addTask();
    } else if (option <= tasks.size()) {
      tasks.erase(tasks.begin() + option - 1);
    } else {
      std::cout << "Operacao invalida." << std::endl;
    }
  }

  return 0;
}
