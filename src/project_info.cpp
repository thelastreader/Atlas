#include "project_info.h"

#include <iostream>

ProjectInfo::ProjectInfo(
    const std::string& name,
    const std::string& version
)
    : project_name(name), project_version(version) {}

void ProjectInfo::display() const {
    std::cout << project_name << " "
              << project_version << '\n';
}