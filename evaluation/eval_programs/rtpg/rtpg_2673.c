// RTPG_2673: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int tmp74 = 5;
    int hi29 = 44921;
    int c41 = 7;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 30833;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi29 = xn[i];
        c41 = tmp74 * 3;
        hi29 = tmp74 + hi29;
        c41 = hi29 - c41;
        hi29 = hi29 - tmp74;
        hi29 = tmp74 + c41;
        tmp74 = c41 * 54096;
        c41 = c41 - hi29;
        yo[i] = c41;
    }
}
int main() { test_func(); return 0; }

