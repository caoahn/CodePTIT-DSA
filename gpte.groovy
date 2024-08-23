#include <iostream>
#include <climits>
using namespace std;

// Số đỉnh tối đa trong đồ thị
#define V 5

// Hàm để tìm đỉnh có cạnh tối thiểu chưa được bao gồm trong tập đã xử lý
int findMinKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
  
    return min_index;
}

// Hàm để in cây khung nhỏ nhất
void printMST(int parent[], int graph[V][V]) {
    cout << "Cạnh \t Trọng số\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t " << graph[i][parent[i]] << endl;
}

// Hàm chính để triển khai thuật toán Prim cho đồ thị biểu diễn bằng ma trận trọng số
void primMST(int graph[V][V], int u) {
    int parent[V]; // Lưu trữ cây khung nhỏ nhất
  
    int key[V];    // Khoảng cách từ cây khung nhỏ nhất đến đỉnh
  
    bool mstSet[V]; // Đánh dấu đỉnh đã được xử lý
  
    // Khởi tạo tất cả các khoảng cách là vô cùng và tất cả các đỉnh chưa được bao gồm trong tập đã xử lý
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;
  
    // Khoảng cách từ chính nó là 0
    key[u] = 0;
    parent[u] = -1; // Đỉnh bắt đầu không có đỉnh cha
  
    // Xây dựng cây khung nhỏ nhất bắt đầu từ u
    for (int count = 0; count < V - 1; count++) {
        // Chọn đỉnh có khoảng cách tối thiểu chưa được bao gồm từ tập đã xử lý
        int v = findMinKey(key, mstSet);
  
        // Đánh dấu đỉnh này đã được xử lý
        mstSet[v] = true;
  
        // Cập nhật key và parent của các đỉnh kề của đỉnh được chọn
        for (int i = 0; i < V; i++)
            // Cập nhật key[i] chỉ khi không phải là mstSet[i], có cạnh từ v đến i và key[i] có thể cải thiện bằng cách đi qua v
            if (graph[v][i] && mstSet[i] == false && graph[v][i] < key[i])
                parent[i] = v, key[i] = graph[v][i];
    }
  
    // In cây khung nhỏ nhất
    printMST(parent, graph);
}

int main() {
    // Ma trận trọng số biểu diễn đồ thị
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
  
    // Đỉnh xuất phát
    int u = 0;
    cout << "Cây khung nhỏ nhất bắt đầu từ đỉnh " << u << ":\n";
    primMST(graph, u);

    return 0;
}
