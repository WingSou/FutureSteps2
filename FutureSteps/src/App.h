#pragma once
#include <memory>
#include "lib/appEnv.hpp"

class App
{
public:
	App();
	static std::shared_ptr<AppEnv> env;

private:
};

