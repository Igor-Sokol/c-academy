#include <iostream>

void GetCompilerInfo()
{
    std::cout << "Compiler - ";

#if defined(__clang__)
    cout << "Clang/LLVM" << endl;

#elif defined(__ICC) || defined(__INTEL_COMPILER)
    cout << "Intel ICC/ICPC" << endl;

#elif defined(__GNUC__) || defined(__GNUG__)
    cout << "GNU GCC/G++" << endl;

#elif defined(__HP_cc) || defined(__HP_aCC)
    cout << "Hewlett-Packard C/aC++" << endl;

#elif defined(__IBMC__) || defined(__IBMCPP__)
    cout << "IBM XL C/C++" << endl;

#elif defined(_MSC_VER)
    std::cout << "Microsoft Visual Studio" << std::endl;

#elif defined(__PGI)
    cout << "Portland Group PGCC/PGCPP" << endl;

#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
    cout << "Oracle Solaris Studio" << endl;

#endif
}
