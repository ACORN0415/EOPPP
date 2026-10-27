// RTPG_8985: vars=5 stmts=3
void test_func(void) {
    int lo92 = 83;
    double x38 = 61.13;
    double tmp2 = 30.01;
    double x8 = 36.91;
    int acc42 = 35569;
    int *ptr = &lo92;
    int i;
    for (i = 0; i < 86; i++) {
        tmp2 = x8 - lo92;
        x8 = x38;
        lo92 = acc42;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

