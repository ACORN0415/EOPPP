// RTPG_5016: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    double dat49 = 60.89;
    int a61 = 17;
    float sum83 = 58.40;
    int lo31 = 8;
    double tmp6 = 78.32;
    int *ptr = &dat49;
    int i;
    for (i = 0; i < 64; i++) {
        lo31 = xn[i];
        a61 = a61 - tmp6;
        sum83 = tmp6 + a61;
        dat49 = a61;
        sum83 = sum83 - 3;
        dat49 = sum83;
        *ptr = *ptr + 4;
        yo[i] = a61;
    }
}
int main() { test_func(); return 0; }

