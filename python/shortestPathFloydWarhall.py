# find shortest path of each node such that it starts and ends at the same node.

def floyd_warshall(graph):
  # Initialize the distance matrix
  num_nodes = len(graph)
  dist = [[float('inf') for _ in range(num_nodes)] for _ in range(num_nodes)]
  for i in range(num_nodes):
    # dist[i][i] = 0 #imp normally its zero 
    for j, w in graph[i].items():
      dist[i][j] = w
      
  # Iterate through all nodes and update the distance matrix
  for k in range(num_nodes):
    for i in range(num_nodes):
      for j in range(num_nodes):
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
  return dist


# Define the input roads and weights.
roads_from = [1, 2, 3, 4]
roads_to = [2, 3, 1, 3]
roads_weight = [14, 23, 23, 30]

# Create a graph representation of the roads and weights.
graph = {}
# make 0 init graoh that why -1
for i in range(len(roads_from)):
  if roads_from[i] not in graph:
    graph[roads_from[i]-1] = {roads_to[i]-1: roads_weight[i]}
  else:
    graph[roads_from[i]-1][roads_to[i]-1] = roads_weight[i]

# Test the function
# graph = {0: {1: 14}, 1: {2: 23}, 2: {0: 23}, 3: {2: 30}}
shortest_paths = floyd_warshall(graph)

print(shortest_paths)


ans = [0]*len(graph)
for node in graph:
  i = node-1
  if shortest_paths[i][i] != float('inf'):
    ans[i] = shortest_paths[i][i]
print(ans)
