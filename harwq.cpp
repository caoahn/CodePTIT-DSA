#include <iostream>
#include <climits>
using namespace std;

// S? d?nh t?i da trong d? th?
#define V 5

// H�m d? t�m d?nh c� c?nh t?i thi?u chua du?c bao g?m trong t?p d� x? l�
int findMinKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
  
    return min_index;
}

// H�m d? in c�y khung nh? nh?t
void printMST(int parent[], int graph[V][V]) {
    cout << "C?nh \t Tr?ng s?\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t " << graph[i][parent[i]] << endl;
}

// H�m ch�nh d? tri?n khai thu?t to�n Prim cho d? th? bi?u di?n b?ng ma tr?n tr?ng s?
void primMST(int graph[V][V], int u) {
    int parent[V]; // Luu tr? c�y khung nh? nh?t
  
    int key[V];    // Kho?ng c�ch t? c�y khung nh? nh?t d?n d?nh
  
    bool mstSet[V]; // ��nh d?u d?nh d� du?c x? l�
  
    // Kh?i t?o t?t c? c�c kho?ng c�ch l� v� c�ng v� t?t c? c�c d?nh chua du?c bao g?m trong t?p d� x? l�
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
  
    // Kho?ng c�ch t? ch�nh n� l� 0
    key[u] = 0;
    parent[u] = -1; // �?nh b?t d?u kh�ng c� d?nh cha
  
    // X�y d?ng c�y khung nh? nh?t b?t d?u t? u
    for (int count = 0; count < V - 1; count++) {
        // Ch?n d?nh c� kho?ng c�ch t?i thi?u chua du?c bao g?m t? t?p d� x? l�
        int v = findMinKey(key, mstSet);
  
        // ��nh d?u d?nh n�y d� du?c x? l�
        mstSet[v] = true;
  
        // C?p nh?t key v� parent c?a c�c d?nh k? c?a d?nh du?c ch?n
        for (int i = 0; i < V; i++)
            // C?p nh?t key[i] ch? khi kh�ng ph?i l� mstSet[i], c� c?nh t? v d?n i v� key[i] c� th? c?i thi?n b?ng c�ch di qua v
            if (graph[v][i] && mstSet[i] == false && graph[v][i] < key[i])
                parent[i] = v, key[i] = graph[v][i];
    }
  
    // In c�y khung nh? nh?t
    printMST(parent, graph);
}

int main() {
    // Ma tr?n tr?ng s? bi?u di?n d? th?
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
  
    // �?nh xu?t ph�t
    int u = 0;
    cout << "C�y khung nh? nh?t b?t d?u t? d?nh " << u << ":\n";
    primMST(graph, u);

    return 0;
}

