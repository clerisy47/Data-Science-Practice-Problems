from collections import deque

def dijkstra(graph, start_vertex):
    D = {v:float('inf') for v in range(graph.v)}
    D[start_vertex] = 0

    queue = deque()
    queue.put((0, start_vertex))

    while not queue.empty():
        (dist, current_vertex) = queue.get()
        graph.visited.append(current_vertex)

        for neighbor in range(graph.v):
            if graph.edges[current_vertex][neighbor] != -1:
                distance = graph.edges[current_vertex][neighbor]
                if neighbor not in graph.visited:
                    old_cost = D[neighbor]
                    new_cost = D[current_vertex] + distance
                    if new_cost < old_cost:
                        queue.put((new_cost, neighbor))
                        D[neighbor] = new_cost
    return D