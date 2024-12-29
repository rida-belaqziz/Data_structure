#include <iostream>
#include <stack>

int main() {
    int n = 10;
    std::stack<int> stack;

    for(int i = 0; i < n; i++) {
        stack.push(i+2);
    }

    std::cout << "Taille de la pile: " << stack.size() << std::endl;
    std::cout << "Élément au sommet: " << stack.top() << std::endl;

    // Pour retirer et afficher un élément, il faut:
    // 1. récupérer la valeur avec top()
    // 2. Ensuite retirer l'élément avec pop()
    int element1 = stack.top();
    stack.pop();
    std::cout << "Élément retiré: " << element1 << std::endl;

    int element2 = stack.top();
    stack.pop();
    std::cout << "Élément retiré: " << element2 << std::endl;

    std::cout << "Nouvelle taille: " << stack.size() << std::endl;
    std::cout << "Élément au sommet: " << stack.top() << std::endl;

    return 0;
}
