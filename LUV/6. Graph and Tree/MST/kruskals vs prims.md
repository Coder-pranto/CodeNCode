kruskals = give only the total sum spanning tree.
prims = gives total sum with tree structure both.


Kruskal's Algorithm and Prim's Algorithm are both algorithms for finding the Minimum Spanning Tree (MST) of a connected, undirected graph. However, they differ in their approaches and the data structures they use.

### Kruskal's Algorithm:

1. **Approach:** Kruskal's algorithm follows a "greedy" approach. It starts with an empty graph and progressively adds the shortest edge that does not form a cycle in the current set of chosen edges.

2. **Data Structure:** It typically uses a Union-Find data structure to efficiently detect cycles and manage connected components.

3. **Edge Selection:** Edges are considered and added to the MST in non-decreasing order of their weights.

4. **Graph Type:** Kruskal's algorithm is naturally suited for distributed systems where each node represents a computing entity, and the edges represent communication links.

### Prim's Algorithm:

1. **Approach:** Prim's algorithm also follows a "greedy" approach, but it starts with an arbitrary node and grows the MST from this initial node by adding the shortest edge that connects a vertex in the MST to a vertex outside the MST.

2. **Data Structure:** It typically uses a priority queue (min-heap) to efficiently select the minimum-weight edge during each step.

3. **Edge Selection:** Edges are considered and added to the MST based on the minimum weight connecting a vertex in the MST to a vertex outside the MST.

4. **Graph Type:** Prim's algorithm is well-suited for scenarios where one node can act as a central hub, and the edges represent the cost of connecting other nodes to this hub.

### Summary of Differences:

- **Edge Selection Order:** Kruskal's selects edges in non-decreasing order of weight, while Prim's selects edges based on the minimum weight connecting a vertex in the MST to a vertex outside the MST.

- **Data Structures:** Kruskal's uses Union-Find for cycle detection, while Prim's uses a priority queue (min-heap) for efficient selection of the minimum-weight edge.

- **Starting Point:** Kruskal's can start from any edge, while Prim's starts from an arbitrary node.

- **Application:** Kruskal's is often used in distributed systems, while Prim's is suitable for scenarios where one node can act as a central hub.

In practice, the choice between Kruskal's and Prim's may depend on the specific characteristics of the graph and the requirements of the application.