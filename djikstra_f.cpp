
#include <iostream>
using namespace std;
#include <limits.h>


/**********************************

Name: Gobinath P
Roll No : CS21M501
Djikstra Algorithm
************************************/


int minDistance(int cost[], bool sptSet[], int V)
{


	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && cost[v] <= min)
			min = cost[v], min_index = v;

	return min_index;
}



int main()
{


    int V = 0;

    cout << "\n*********************************************"<<endl;
    cout << "* Name: Gobinath P                          *"<<endl;
    cout << "* Roll No : CS21M501                        *"<<endl;
    cout << "* Djikstra Algorithm                        *"<<endl;
    cout << "*********************************************"<<endl;


    cout << "Enter the Number of Vertices : "<<endl;
    cin  >> V;
	int graph[V][V] = { };


   for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
            graph[i][j] = 0;
    }


    cout<<"\nOnly the Diagonal Elements are enough to get stored \nSince the Undirected Graph Weights are Symmeteric \n"<<endl;


    // Get Weights from User : 
    for (int i = 0; i < V; i++)
    {
        cout<<"Enter values for row : "<<(i)<<endl;
        for (int j = i; j < V; j++)
        {int z;
            cout<<"("<<i << " " << j<<") : ";
            cin>>z;
            // Set zero for No Edges

            graph[i][j] = z;
            graph[j][i] = z;
            graph[j][i] = graph[i][j];

        }
    }

    cout<<"\n\nArray Table for Storing Edges' weights : \n"<<endl;

 
    cout<<" Destination | \t";
    for (int i = 0; i < V; i++)
        cout<< i << "\t   ";
    cout<<endl;

    for (int i = 0; i < V*9; i++)
        cout<< "-";
    cout<<endl;


    // Display Table
   for (int i = 0; i < V; i++)
    {cout<<"Source Node" << i << " |\t";
        for (int j = 0; j < V; j++)
        {
            cout<<graph[i][j] << "\t";
        }
        cout<<endl;
    }


    int source = 0;
    cout << "Enter the source Node : ";
    cin>> source;
	int cost[V]; 

	bool sptSet[V]; 

	for (int i = 0; i < V; i++)
		cost[i] = INT_MAX, sptSet[i] = false;

	cost[source] = 0;


	for (int count = 0; count < V - 1; count++) {

		int u = minDistance(cost, sptSet,V);
		sptSet[u] = true;
		for (int v = 0; v < V; v++)
			if (!sptSet[v] && graph[u][v] && cost[u] != INT_MAX && cost[u] + graph[u][v] < cost[v])
				cost[v] = cost[u] + graph[u][v];
	}

    cout<<"\n******************************************************************"<<endl;
    cout<<"******************************************************************"<<endl;
    cout<<"Shortest Distance using Djikstra Algorithm\n"<<endl;

	cout <<"Vertex \t Distance from Source" << source <<endl;
	for (int i = 0; i < V; i++)
		cout << i << " \t\t"<<cost[i]<< endl;
    cout<<"The Time complexity for Bellman Ford Algorithm is  : O((V*V)"<<endl;
    cout<<"******************************************************************"<<endl;
    cout<<"******************************************************************"<<endl; 

    system("PAUSE");
    return EXIT_SUCCESS;
}
