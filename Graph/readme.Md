Dijkstra algorithm can be used for shortest path calculation for
1) directed and undirected weighted graph
2) directed acyclic weighted graph
3) work for both cyclic and acyclic graph

For Directed Acyclic Graph we can use topological sort algorithm for shortest path

For unweighted directed and undirected graph shortest distance can be find using simple BFS

Cycle Detection in Graph
1) Cycle Detection in Undirected graph using DFS
2) Cycle Detection in Undirected gragh using BFS
3) Cycle Detection in Directed Graph using BFS called Kahn's algorithm
4) Cycle Detection in Directed Graph using DFS

Minimum Spanning Tree
-> all points must be connected
->every edge can be visited by other edges
->select the edges with minimum weight
->minimum edges weight sum
edges = V-1
V = vertices 


What is Complete Graph
-> when all the edges are connected to each other
-> no. of edges is V*(V-1)/2 , V = vertices

Strongly Connected Components ->  Kosaraju's Algorithm GFG

Bellman–Ford Algorithm
for directed graph only
1) Shortest Path in Graph containing negative weight
2) also detect nagative weighted Cycle

An undirected graph is a tree if it has the following properties. 
1) There is no cycle. 
2) The graph is connected.
3) Map of Highest Peak

Important Question
Multi-Source BFS
1) Walls And Gates
2) Rotting Oranges
4) Map of Highest Peak

Kahn's algorithm 
1) no need of visited array
2) inDegree array is needed
3) queue to store node with inDegree 0
4) node should be pushed in the queue only if its inDegree is 0