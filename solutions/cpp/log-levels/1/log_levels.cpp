#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
	long unsigned int index{line.find(":")};
	return line.substr(index + 2);
}

std::string log_level(std::string line) {
    // return the log level
    return line.substr(1, line.find("]")-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
	std::string level{line.substr(1, line.find("]")-1)};
	std::string msg{line.substr(line.find(":") + 2)};

    return msg + "(" + level + ")";
}
}  // namespace log_line
