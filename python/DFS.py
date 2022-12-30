graph = {
    "A" : ["B","C"],
    "B" : ["D","E"],
    "C" : ["F","G"],
    "D" : "",
    "E" : "",
    "F" : "",
    "G" : ""
}

st = []
st.append(list(graph.keys())[0])
visited = []

while st != []:
    node = st.pop()
    print(node)
    visited.append(node)
    for adjnode in graph[node]:
        if adjnode not in visited:
            st.append(adjnode)

