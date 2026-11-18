#ifndef PROJECT_INFO_H
#define PROJECT_INFO_H

#include <string>

class ProjectInfo {
private:
    std::string project_name = "webserver";
    std::string project_version = "0.0.1";

public:
    ProjectInfo() = default;

    ProjectInfo(const std::string& name, const std::string& version);

    void display() const;
};

#endif