
#include <iostream>
#include <string>

class Logger {
public:
    Logger() = default;
    virtual ~Logger() = default;

    virtual std::string Show() const {
        std::string a;

        a = jakies_dziadostwo + " | " + jakies_dziadostwo + "_123";

        return a;
    }

    const std::string jakies_dziadostwo = "Jakies dziadonstfo";
};

int main() {

    Logger logger;
    std::string s = logger.Show();
    std::cout << s << std::endl;
    
    return 0;
}
