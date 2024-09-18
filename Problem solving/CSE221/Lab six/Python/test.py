import sys
import heapq

def dijkstra(graph, source):
    """
    Dijkstra's algorithm to find the shortest paths from the source node to all other nodes.

    Args:
        graph (list of lists): Adjacency list representation of the graph, where each inner list represents a node and its edges.
        source (int): Source node.

    Returns:
        distances (list): List of shortest distances from the source node to all other nodes.
    """
    distances = [sys.maxsize] * len(graph)
    distances[source - 1] = 0  # subtract 1 because node indices are 1-based

    pq = [(0, source)]  # priority queue to store nodes to be processed

    while pq:
        dist, node = heapq.heappop(pq)
        if dist > distances[node - 1]:
            continue
        for neighbor, weight in graph[node - 1]:
            old_dist = distances[neighbor - 1]
            new_dist = distances[node - 1] + weight
            if new_dist < old_dist:
                distances[neighbor - 1] = new_dist
                heapq.heappush(pq, (new_dist, neighbor))

    return distances

# Read input
N, M = map(int, input().split())
graph = [[] for _ in range(N)]
for _ in range(M):
    u, v, w = map(int, input().split())
    graph[u - 1].append((v, w))
S = int(input())

# Run Dijkstra's algorithm
distances = dijkstra(graph, S)

# Output results
print(' '.join(str(d) if d != sys.maxsize else '-1' for d in distances))