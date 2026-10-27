// RTPG_4834: vars=3 stmts=2
void test_func(void) {
    int hi26 = 15139;
    int dat8 = 30847;
    int c12 = 13;
    int *ptr = &hi26;
    int h0 = 49862;
    int sv0 = 0;
    int h1 = -10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        hi26 = hi26 * 83;
        dat8 = dat8 - dat8;
        *ptr = *ptr + 1;
        if (c12 == 79) {
        c12 = hi26 - dat8;
        }
    }
}
int main() { test_func(); return 0; }

