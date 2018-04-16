#ifndef GAME_NODE_H
#define GAME_NODE_H

#include <vector>

struct GameNode {

private:
  int node_id;
  bool is_root;
  bool is_terminal;
  int current_round;
  int is_played_by;
  std::vector<GameNode*> children;

public:
  GameNode(int id) {
    node_id = id;
    if (node_id) {
      is_root = true;
    }
  }
  int get_node_id() { return node_id; }
  bool is_root_() { return is_root; }
  bool is_terminal_() { return is_terminal; }
  int get_children() { return children.size(); }
  int get_current_round() { return current_round; }
  int is_played_by_() { return is_played_by; }
  
};

#endif
