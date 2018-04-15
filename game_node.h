#ifndef GAME_NODE_H
#define GAME_NODE_H

struct GameNode {

private:
  int node_id;
  bool is_root;
  bool is_terminal;

public:
  GameNode(int id) {
    node_id = id;
    if (node_id) {
      is_root = true;
    }
  }
  int get_node_id() { return node_id; }
};

#endif
