
extern "C" void __cdecl ENT(                                                                                         //int argc, char *argv[],
         unsigned char *input_array, size_t array_size, int binary,                               // IN
         double *ent, double *chisq, double *mean, double *montepi, double *scc,                  // OUT
         double *chip, double *compRate, double *errorPct                                         // Additional
);