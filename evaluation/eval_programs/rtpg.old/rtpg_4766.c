// RTPG_4766: vars=3 stmts=2
void test_func(void) {
    int c12 = 15139;
    int dat8 = 30847;
    int hi26 = 13;
    int *ptr = &c12;
    int h0 = 49862;
    int sv0 = 0;
    int h1 = -10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        c12 = c12 * 83;
        dat8 = dat8 - dat8;
        *ptr = *ptr + 1;
        if (hi26 == 79) {
        hi26 = c12 - dat8;
        }
    }
}
int main() { test_func(); return 0; }

