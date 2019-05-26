
#include <iostream>
#include <string>

class Logger {
public:
    Logger() = default;
    virtual ~Logger() = default;

    virtual std::string Show() const {
        std::string a;

        a = jakies_dziadostwo + " | " + jakies_dziadostwo + "_123";
        a += "_ABCDE";        
        a += "ZYC";

        return a;
    }

    const std::string jakies_dziadostwo = "Jakies dziadonstfo numer 2";
};

int main() {

    Logger logger;
    std::string s = logger.Show();
    s += std::string() + "\n" + s + "\n" + s;
    std::cout << s << std::endl;
    std::cout << "AHA! \n";
    
    return 0;
}
