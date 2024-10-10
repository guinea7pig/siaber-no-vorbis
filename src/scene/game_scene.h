#ifndef GAME_SCENE_H
#define GAME_SCENE_H
#include "scene.h"
#include <vector>

class GameObject;


class GameScene : public Scene {
private:
  std::vector<GameObject*> gameObjects;

public:
  GameScene(const char* songdir);
  ~GameScene();

  void init();
  void update(f32 deltatime);
  void render();
};

#endif // GAME_SCENE_H