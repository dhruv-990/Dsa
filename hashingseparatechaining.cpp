#include<iostream>
#include <vector>
#include <list>
#include <algorithm>


using namespace std;

class HashTable {
    int BUCKET;
    vector<list<int>> table;

public:
    HashTable(int V);
    void insertItem(int key);
    void deleteItem(int key);
    int hashFunction(int x) {
        return (x % BUCKET);
    }
    void displayHash();
};

HashTable::HashTable(int b) {
    this->BUCKET = b;
    table.resize(BUCKET);
}

void HashTable::insertItem(int key) {
    int index = hashFunction(key);
    table[index].push_back(key);
}

void HashTable::deleteItem(int key) {
    int index = hashFunction(key);
    auto it = find(table[index].begin(), table[index].end(), key);

    if (it != table[index].end())
        table[index].erase(it);
}

void HashTable::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }
}

int main() {
    int keys[] = {15, 11, 27, 8, 12};
    int n = sizeof(keys)/sizeof(keys[0]);

    HashTable h(7);

    for (int i = 0; i < n; i++)
        h.insertItem(keys[i]);

    h.deleteItem(12);

    h.displayHash();

    return 0;
}
