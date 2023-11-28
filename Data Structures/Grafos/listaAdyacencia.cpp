#include <iostream>
#include <vector>

using namespace std;

// Función para agregar una arista al grafo no dirigido
void agregarArista(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Agregar v a la lista de adyacencia de u
    adj[v].push_back(u); // Si el grafo es no dirigido, agregar u a la lista de adyacencia de v
}

// Función para imprimir la lista de adyacencia
void imprimirListaAdyacencia(vector<int> adj[], int V) {
    for (int i = 0; i < V; ++i) {
        cout << "Lista de adyacencia del nodo " << i << ":";

        for (int j = 0; j < adj[i].size(); ++j)
            cout << " -> " << adj[i][j];

        cout << endl;
    }
}

int main() {
    int V = 5; // Número de nodos en el grafo
    vector<int> adj[V]; // Vector de vectores para representar la lista de adyacencia

    // Agregar aristas al grafo
    agregarArista(adj, 0, 1);
    agregarArista(adj, 0, 4);
    agregarArista(adj, 1, 2);
    agregarArista(adj, 1, 3);
    agregarArista(adj, 1, 4);
    agregarArista(adj, 2, 3);
    agregarArista(adj, 3, 4);

    // Imprimir la lista de adyacencia
    imprimirListaAdyacencia(adj, V);

    return 0;
}
