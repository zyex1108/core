#ifndef PH_H
#define PH_H

#include <string>

namespace apf {
  class Mesh2;
}

namespace ph {

void fail(const char* format, ...) __attribute__((noreturn,format(printf,1,2)));

void goToStepDir(int step);
void goToParentDir();
std::string setupOutputDir();
void setupInputSubdir(std::string& path);
void setupOutputSubdir(std::string& path);
void writeAuxiliaryFiles(std::string path, int timestep);

class Input;
class Output;
class BCs;
void preprocess(apf::Mesh2* m, ph::Input& in, ph::Output& out, ph::BCs& bcs);

}

#endif
