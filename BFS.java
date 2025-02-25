import java.util.*;

class Graph {
    private int vertices;
    private LinkedList<Integer>[] adjacencyList;

    @SuppressWarnings("unchecked")
    public Graph(int vertices) {
        this.vertices = vertices;
        adjacencyList = (LinkedList<Integer>[]) new LinkedList[vertices];
        for (int i = 0; i < vertices; i++) {
            adjacencyList[i] = new LinkedList<>();
        }
    }

    public void addEdge(int v, int w) {
        adjacencyList[v].add(w);
        adjacencyList[w].add(v);
    }

    public class BFSIterator implements Iterator<Integer> {
        private boolean[] visited;
        private Queue<Integer> queue;

        public BFSIterator(int startVertex) {
            visited = new boolean[vertices];
            queue = new LinkedList<>();
            queue.add(startVertex);
            visited[startVertex] = true;
        }

        @Override
        public boolean hasNext() {
            return !queue.isEmpty();
        }

        @Override
        public Integer next() {
            if (!hasNext()) {
                throw new NoSuchElementException();
            }

            int currentVertex = queue.poll();

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    queue.add(neighbor);
                    visited[neighbor] = true;
                }
            }

            return currentVertex;
        }
    }

    public Iterator<Integer> getBFSIterator(int startVertex) {
        return new BFSIterator(startVertex);
    }
}

public class BFS {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of vertices: ");
        int vertices = scanner.nextInt();

        Graph graph = new Graph(vertices);

        System.out.print("Enter number of edges: ");
        int edges = scanner.nextInt();

        System.out.println("Enter edges in the format: vertex1 vertex2");
        for (int i = 0; i < edges; i++) {
            int vertex1 = scanner.nextInt();
            int vertex2 = scanner.nextInt();
            graph.addEdge(vertex1, vertex2);
        }

        System.out.print("Enter the starting vertex for BFS: ");
        int startVertex = scanner.nextInt();

        Iterator<Integer> bfsIterator = graph.getBFSIterator(startVertex);

        System.out.println("BFS Traversal:");
        while (bfsIterator.hasNext()) {
            System.out.print(bfsIterator.next() + " ");
        }
    }
}
