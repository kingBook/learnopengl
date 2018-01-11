#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;
class TestBase
{
public:
	TestBase();
	~TestBase();

	virtual void onBuildAndCompileShader()=0;
	virtual void onDraw()=0;
	virtual void onGLDelete()=0;
private:

};