// RTPG_7654: vars=3 stmts=8
void test_func(void) {
    float z25 = 53.74;
    double v23 = 66.68;
    double hi43 = 32.64;
    int i;
    for (i = 0; i < 15; i++) {
        v23 = v23 - 5;
        hi43 = v23 | z25;
        v23 = z25 + hi43;
        v23 = z25 - hi43;
        hi43 = hi43;
        v23 = hi43 / z25;
        hi43 = hi43 - 5;
        hi43 = z25 & v23;
    }
}
int main() { test_func(); return 0; }

