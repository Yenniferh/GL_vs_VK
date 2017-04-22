#pragma once

#include <tests/common/Ball.h>

#include <glm/vec4.hpp>

#include <vector>

namespace tests {
class BaseSimpleBallsSceneTest
{
  public:
    BaseSimpleBallsSceneTest() = default;
    virtual ~BaseSimpleBallsSceneTest() = default;

  protected:
    void initTestState();
    void updateTestState(float frameTime);
    void destroyTestState();

    const std::vector<common::Ball>& balls() const;
    const std::vector<glm::vec4>& vertices() const;

  private:
    std::vector<common::Ball> _balls;
    std::vector<glm::vec4> _vertices;
};
}
