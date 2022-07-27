

namespace ss7pro {
    class simpleClass {
        public:
            std::int32_t counter;

            simpleClass(void) {
                counter = 0;
                std::cout << "Default constructor" << std::endl;
            };

            simpleClass(std::int32_t initialCounter) {
                counter = initialCounter;
                std::cout << "Explicit constructor" << std::endl;
            };

            void printCounter() {
                std::cout << "Counter value:" << counter << std::endl;
            };
    };
}