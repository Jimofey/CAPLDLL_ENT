
extern "C" void __cdecl ENT(                                                                     // int argc, char *argv[],
        unsigned char *input_array, size_t array_size, unsigned long binary,                     // IN
        double *ent, double *chisq, double *mean, double *montepi, double *scc,                  // OUT
        double *chip, int *compRate, double *errorPct                                         // Additional
);