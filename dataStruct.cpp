#include <iostream>
#include <stack> //La stack (pile) suit le principe LIFO (Last In, First Out), c'est-à-dire que le dernier élément ajouté est le premier à être retiré.
#include <queue> //La queue (file) suit le principe FIFO (First In, First Out), c'est-à-dire que le premier élément ajouté est le premier à être retiré.
#include <deque> //La deque (double-ended queue) permet d'ajouter et de retirer des éléments des deux côtés (avant et arrière).
#include <vector> //Le vector est un tableau dynamique capable de redimensionner automatiquement sa taille
#include <list> //La std::list est une structure de données fournie par la bibliothèque standard C++ pour implémenter une liste chaînée (doubly linked list). Elle permet une insertion, une suppression, et un accès bidirectionnel efficaces.

using namespace std;

// Résumé Rapide des Points Clés pour C++17 :(g++ -std=c++17 -o programme fichier.cpp)
//-------------------------------------------
// std::optional	Valeurs optionnelles.
// std::variant	Union sécurisée.
// std::any	Type générique.
// Structure bindings	Décomposition simplifiée.
// Initialisation dans if/switch	Variables locales aux conditions.
// std::filesystem	Manipulation de fichiers.
// Parallel STL	Algorithmes parallèles.
// constexpr amélioré	Calculs plus complexes à la compilation.



int main() {

    int n = 10;
    //=================================================================
    //=================================================================
    //Stack(pile)
    cout<<"Stack"<<endl;
    std::stack<int> Mystack;

    for(int i = 0; i < n; i++) {
        Mystack.push(i+2);
    }
    cout << " " << std::endl;
    cout << "Taille de la pile: " << Mystack.size() << std::endl;
    cout << "Élément au sommet: " << Mystack.top() << std::endl;
    cout << " " << std::endl;
    // Pour retirer et afficher un élément, il faut:
    // 1. récupérer la valeur avec top()
    // 2. Ensuite retirer l'élément avec pop()
    int element1 = Mystack.top();
    Mystack.pop();
    std::cout << "Élément retiré: " << element1 << std::endl;

    int element2 = Mystack.top();
    Mystack.pop();
    cout << "Élément retiré: " << element2 << std::endl;

    cout << "Nouvelle taille: " << Mystack.size() << std::endl;
    cout << "Élément au sommet: " << Mystack.top() << std::endl;
    cout << " " << std::endl;
    //=================================================================
    //=================================================================
    //queue (file)
    cout<<"Queue"<<endl;
    queue<int> MyFile;
    for(int i= 0; i<n ; i++){
        MyFile.push(i+2);
    }
    cout << " " << std::endl;
    cout << " " << std::endl;
    cout << "Premier élément de la file : " << MyFile.front() << std::endl;
    cout << "Dernier élément de la file : " << MyFile.back() << std::endl;
    cout << " " << std::endl;
    // Retirer un élément
    MyFile.pop();
    std::cout << "Après pop, premier élément : " << MyFile.front() << std::endl;

    // Afficher et vider la file
    while (!MyFile.empty()) {
        cout << "Élément : " << MyFile.front() << std::endl;
        MyFile.pop();
    }
    cout << " " << std::endl;
    cout << " " << std::endl;
    //=================================================================
    //=================================================================
    //deque (double-ended queue)
    cout<<"Deque"<<endl;
    deque<int> MyDeque;
    for(int i= 0; i<n ; i++){
        MyDeque.push_back(i+2);
    }

    cout << "Premier élément : " << MyDeque.front() << std::endl;
    cout << "Dernier élément : " << MyDeque.back() << std::endl;

  
    // Retirer des éléments
    MyDeque.pop_front();
    MyDeque.pop_back();

    cout << "Après pop, premier élément : " << MyDeque.front() << std::endl;
    cout << "Après pop, dernier élément : " << MyDeque.back() << std::endl;
    cout << " " << std::endl;
    cout << " " << std::endl;

    //=================================================================
    //=================================================================
    //vector
    cout<<"Vector"<<endl;

    vector<int> Myvector;
    for(int i=0;i<n;i++){
        Myvector.push_back(i+2);
    }
    cout<<""<<endl;
    for(int i=0;i<n;i++){
        cout<<Myvector[i]<<endl;;
    }
    cout<<""<<endl;
    // Supprimer le dernier élément
    Myvector.pop_back();

    std::cout << "Après pop_back, éléments du vector : ";
    for (int i : Myvector) {
        cout << i << " ";
    }
    cout << std::endl;

    // Accéder directement à un élément
    cout << "Premier élément : " << Myvector.front() << std::endl;
    cout << "Dernier élément : " << Myvector.back() << std::endl;
    cout << " " << std::endl;
    cout << " " << std::endl;
    //=================================================================
    //=================================================================
    //List
    cout<<"List"<<endl;
    list<int> MyListe = {1, 2, 3, 4};

    // Ajouter des éléments
    MyListe.push_back(5);
    MyListe.push_front(0);

    // Afficher les éléments
    cout << "Éléments de la liste : ";
    for (int val : MyListe) {
        cout << val << " ";
    }
    cout << endl;

    // Supprimer un élément spécifique
    MyListe.remove(3);

    // Trier et inverser la liste
    MyListe.sort();
    MyListe.reverse();

    cout << "Liste après tri et inversion : ";
    for (int val : MyListe) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Premier élément : " << MyListe.front() << endl;
    cout << "Dernier élément : " << MyListe.back() << endl;
    return 0;
}
