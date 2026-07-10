#include <iostream>
#include <string>
#include <vector>

// Ascii map and terminal-based small roguelike
// g++ -std=c++20 -Wall -Wextra references.cpp -o references
//./references
// gamelooped skeleton

void render(const std::vector<std::string> &map, int player_x, int player_y) {
  std::cout << "\033[2J\033[3J\033[H";
  for (int y = 0; y < (int)map.size(); y++) {
    for (int x = 0; x < (int)map[y].size(); x++) {
      if (x == player_x && y == player_y) {
        std::cout << '@';
      } else {
        std::cout << map[y][x];
      }
    }
    std::cout << "\n";
  }
  std::cout << "Use WASD to move, Q to quit";
  std::cout.flush();
}
char readInput() {
  char c;
  std::cin >> c;
  return c;
}

void processInput(char input, int &player_x, int &player_y, bool &running) {
  switch (input) {
  case 'w':
    player_y -= 1;
    break;
  case 's':
    player_y += 1;
    break;
  case 'a':
    player_x -= 1;
    break;
  case 'd':
    player_x += 1;
    break;
  case 'q':
    running = false;
    break;
  }
}
int main() {
  std::vector<std::string> map = {
      "##########", "#........#", "#........#", "#........#",
      "#........#", "#........#", "##########",
  };
  int player_x = 3;
  int player_y = 3;
  bool running = true;

  while (running) {
    render(map, player_x, player_y);
    char input = readInput();
    processInput(input, player_x, player_y, running);
  }
  std::cout << "thanks for playing idk how some of these works honestly"
            << "\n";
  return 0;
}