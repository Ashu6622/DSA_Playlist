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
-> it is a given graph which suppose to be converted in tree
edges = V-1
V = vertices 


What is Complete Graph
-> when all the edges are connected to each other
-> no. of edges is V*(V-1)/2 , V = vertices

Strongly Connected Components ->  Kosaraju's Algorithm GFG only for directed graph
first -> store the toposort in stack
second -> Reverse all edges
third -> call dfs according to the element from stack  

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

Important Question Type simple BFS (counting minimum step)
1) Word Ladder
2) Open the Lock

Kahn's algorithm 
1) no need of visited array
2) inDegree array is needed
3) queue to store node with inDegree = 0
4) node should be pushed in the queue only if its inDegree is 0

Important DFS/BFS
1) Making A Large Island


Queestions
1) Possible Bipartition
2) Is Graph Bipartite
3) Minimum Time to Collect All Apples in a Tree
4) Count Unreachable Pairs of Nodes in an Undirected Graph
5) Minimum Number of Vertices to Reach All Nodes  (include the nodes whose indegree is zero)
   Number of Operations to Make Network Connected
6) Longest Cycle in a Graph (important)
7) Keys and Rooms
8) Path with Maximum Probability
9) Find the City With the Smallest Number of Neighbors at a Threshold Distance (important)
10) Redundant Connection (Union find)


Very Important
1) Critical Connections in a Network (Tarjan's Algorithm) (Bridges in Graph)
2) Articulation Point - I
3) Accounts Merge (this question is to remove the redundant email and merge the email with same parent) so DSU is used here
4) Making A Large Island