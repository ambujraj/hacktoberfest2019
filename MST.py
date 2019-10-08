from collections import defaultdict
from collections import deque
import heapq as hq
import math

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def addEdge(self, u, v, w):
        self.graph[u].append((w, v))

    def print(self):
        for u in self.graph:
            print(self.graph[u])


def mst(graph, s):
    total = 0

    visited = [False] * len(graph)
    lowest_dist = [math.inf] * len(graph)
    parents = [-1] * len(graph)
    lowest_dist[s] = 0
    queue = []
    hq.heappush(queue, (0, s))

    while len(queue) > 0:
        dist, u = hq.heappop(queue)
        visited[u] = True

        for i in graph[u]:
            d, v = i[0], i[1]
            if not visited[v] and d < lowest_dist[v]:
                lowest_dist[v] = d
                parents[v] = u
                hq.heappush(queue, [d, v])


    print(parents)
    print(lowest_dist)

    for num in lowest_dist:
        total += num
    return total


v, a = map(int, input().split())

g = Graph()
for i in range(a):
    u, v, w = map(int, input().split())
    g.addEdge(u, v, w)