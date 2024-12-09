
extern "C" void __stdcall ENT(                                                               // int argc, char *argv[],
    unsigned char* input_array, size_t array_size, unsigned long binary,                     // IN
    double* ent, double* chisq, double* mean, double* montepi, double* scc,                  // OUT
    double* chip, double* compRate, double* errorPct                                         // Additional
);

extern "C" void __stdcall ENT_SimpleTest(
    unsigned char* input_array, size_t array_size, unsigned long binary,                     // IN
    double* ent, double* chisq, double* mean, double* montepi, double* scc,                  // OUT
    double* chip, double* compRate, double* errorPct
);

extern "C" void __stdcall ENT_VarTest(
    unsigned char input_array[], size_t array_size, unsigned long binary,
    double ent, double chisq, double mean, double montepi, double scc,
    double chip, double compRate, double errorPct
);