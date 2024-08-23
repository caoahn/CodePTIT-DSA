#include <iostream>
#include <climits>
using namespace std;

// S? d?nh t?i da trong d? th?
#define V 5

// Hàm d? tìm d?nh có c?nh t?i thi?u chua du?c bao g?m trong t?p dã x? lý
int findMinKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
  
    return min_index;
}

// Hàm d? in cây khung nh? nh?t
void printMST(int parent[], int graph[V][V]) {
    cout << "C?nh \t Tr?ng s?\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t " << graph[i][parent[i]] << endl;
}

// Hàm chính d? tri?n khai thu?t toán Prim cho d? th? bi?u di?n b?ng ma tr?n tr?ng s?
void primMST(int graph[V][V], int u) {
    int parent[V]; // Luu tr? cây khung nh? nh?t
  
    int key[V];    // Kho?ng cách t? cây khung nh? nh?t d?n d?nh
  
    bool mstSet[V]; // Ðánh d?u d?nh dã du?c x? lý
  
    // Kh?i t?o t?t c? các kho?ng cách là vô cùng và t?t c? các d?nh chua du?c bao g?m trong t?p dã x? lý
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
  
    // Kho?ng cách t? chính nó là 0
    key[u] = 0;
    parent[u] = -1; // Ð?nh b?t d?u không có d?nh cha
  
    // Xây d?ng cây khung nh? nh?t b?t d?u t? u
    for (int count = 0; count < V - 1; count++) {
        // Ch?n d?nh có kho?ng cách t?i thi?u chua du?c bao g?m t? t?p dã x? lý
        int v = findMinKey(key, mstSet);
  
        // Ðánh d?u d?nh này dã du?c x? lý
        mstSet[v] = true;
  
        // C?p nh?t key và parent c?a các d?nh k? c?a d?nh du?c ch?n
        for (int i = 0; i < V; i++)
            // C?p nh?t key[i] ch? khi không ph?i là mstSet[i], có c?nh t? v d?n i và key[i] có th? c?i thi?n b?ng cách di qua v
            if (graph[v][i] && mstSet[i] == false && graph[v][i] < key[i])
                parent[i] = v, key[i] = graph[v][i];
    }
  
    // In cây khung nh? nh?t
    printMST(parent, graph);
}

int main() {
    // Ma tr?n tr?ng s? bi?u di?n d? th?
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
  
    // Ð?nh xu?t phát
    int u = 0;
    cout << "Cây khung nh? nh?t b?t d?u t? d?nh " << u << ":\n";
    primMST(graph, u);

    return 0;
}

