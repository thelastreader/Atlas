#include <memory>
#include "project_info.h"

int main() {

    const ProjectInfo server;

    const auto obj =
        std::make_unique<ProjectInfo>("server2", "0.0.2");

    server.display();
    obj->display();

    return 0;
}