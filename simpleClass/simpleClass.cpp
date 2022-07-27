#include <iostream>

#include "simpleClass.h"

int main(int argc, char **argv) {
    ss7pro::simpleClass simpleClass {};
    ss7pro::simpleClass simpleClassExplicit {10};
    simpleClass.printCounter();
    simpleClassExplicit.printCounter();
}