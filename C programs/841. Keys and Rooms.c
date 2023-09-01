void dfs(int room, bool visited[], int** rooms, int roomsColSize[]) {
    visited[room] = true;

    for (int i = 0; i < roomsColSize[room]; i++) {
        int key = rooms[room][i];
        if (!visited[key]) {
            dfs(key, visited, rooms, roomsColSize);
        }
    }
}

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) {
    bool visited[roomsSize];
    for (int i = 0; i < roomsSize; i++) {
        visited[i] = false;
    }

    dfs(0, visited, rooms, roomsColSize);

    for (int i = 0; i < roomsSize; i++) {
        if (!visited[i]) {
            return false;
        }
    }

    return true;
}
