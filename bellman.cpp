#include <bits/stdc++.h>
using namespace std;



/**********************************

Name: Gobinath P
Roll No : CS21M501
Bellman Ford Algorithm
************************************/

//Elements of Edge
struct Edge
{
        int source;
        int destination;
        int weight;
};


// Elements of Graph
struct Graph
{
        int V;
        int E;
        struct Edge* edge;
};


//Create Graph
struct Graph* createGraph(int V, int E)
{
        struct Graph* graph = new Graph;
        graph->V = V;
        graph->E = E;
        graph->edge = new Edge[E];
        return graph;
}


int main()
{

        int Vertex = 0; 
        int Edge = 0;

    cout << "\n*********************************************"<<endl;
    cout << "* Name: Gobinath P                          *"<<endl;
    cout << "* Roll No : CS21M501                        *"<<endl;
    cout << "* Bellman Ford Algorithm                    *"<<endl;
    cout << "*********************************************"<<endl;
        cout << "Enter the Number of Nodes/Vertex : ";
        cin >> Vertex;
        cout << "Enter the Number of Edges: ";
        cin >> Edge;
        struct Graph* graph = createGraph(Vertex, Edge);

        for (int i = 0; i < Edge;i++)
        {
        cout << "Enter source " << i+1<<" : "<<endl;
        cin>>graph->edge[i].source;
        cout << "Enter destinationination " << i+1<<" : "<<endl;
        cin>>graph->edge[i].destination;
        cout << "Enter Cost " << i+1<<" : "<< endl;
        cin>>graph->edge[i].weight;  
        }


        int source = 0;
        cout << "Enter the source node : ";
        cin>> source;


        int V = graph->V;
        int E = graph->E;
        int cost[V];

        for (int i = 0; i < V; i++)
                cost[i] = INT_MAX;
        cost[source] = 0;


        for (int i = 1; i <= V - 1; i++)
        {
            for (int j = 0; j < E; j++) 
            {
                int u = graph->edge[j].source;
                int v = graph->edge[j].destination;
                int weight = graph->edge[j].weight;
                if (cost[u] != INT_MAX && cost[u] + weight < cost[v])
                    cost[v] = cost[u] + weight;
            }
        }

        for (int i = 0; i < E; i++)
        {
            int u = graph->edge[i].source;
            int v = graph->edge[i].destination;
            int weight = graph->edge[i].weight;
            if (cost[u] != INT_MAX && cost[u] + weight < cost[v]) 
            {
                printf("Graph contains negative weight cycle");
                return 0;
            }
        }
    cout<<"\n******************************************************************"<<endl;
    cout<<"******************************************************************"<<endl;
    cout<<"Shortest Distance using Bellman Ford Algorithm\n"<<endl;
        for (int i = 0; i < V; ++i)
            cout<<"\t From "<<source <<" to "<<i<< " distance is "<<cost[i]<<endl;
    cout<<"The Time complexity for Bellman Ford Algorithm is  : O((V+E)LogV)"<<endl;
    cout<<"******************************************************************"<<endl;
    cout<<"******************************************************************"<<endl;      
        return 0;
}
