def dijkstra(graph, source):
  dist = [float('inf')] * len(graph)
  dist[source] = 0
  
  # Create a set to track the nodes that have been processed.
  visited = set()
  
  # Set the current node to the source node.
  current_node = source
  
  # Loop until all nodes have been processed.
  while len(visited) != len(graph):
    # For each neighbor of the current node, calculate the distance to the neighbor
    # using the weight of the edge connecting the current node and the neighbor.
    # If the calculated distance is less than the current value in the distance array
    # for that neighbor, update the distance array with the new shorter distance.
    for neighbor, weight in graph[current_node].items():
      if neighbor not in visited:
        dist[neighbor] = min(dist[neighbor], dist[current_node] + weight)
    
    # Add the current node to the visited set and mark it as processed.
    visited.add(current_node)
    
    # Set the current node to the unvisited node with the smallest distance.
    current_node = min(set(range(len(graph))) - visited, key=lambda x: dist[x])
  
  # Return the distance array.
  return dist