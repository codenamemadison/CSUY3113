#include "Scene.h"
class MainMenu : public Scene {
public:
    void Initialize() override;
    void Update(float deltaTime, int &lives) override;
    void Render(ShaderProgram *program) override;
};


