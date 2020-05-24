# tree-print in C++

## Node Structure
```c++
class Node{
  Type data;
  Node* parent;
  Node* rightSibling;
  Node* leftChild;
}
```

## printing
using cout and ostream:
```c++
cout << node.data
cout << node.leftChild      // recursive next Level
cout << node.rightSibling   // recursive next Sibling Node
```





