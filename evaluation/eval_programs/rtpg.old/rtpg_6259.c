// RTPG_6259: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int v49 = -2;
    int tmp53 = 30264;
    int res64 = 6;
    int res24 = 49;
    int *ptr = &v49;
    int h0 = 26;
    int sv0 = 0;
    int h1 = 15086;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res64 = xn[i];
        tmp53 = res64 + v49;
        tmp53 = v49 | res64;
        tmp53 = res64 * 45676;
        *ptr = *ptr + 4;
        yo[i] = tmp53;
    }
}
int main() { test_func(); return 0; }

