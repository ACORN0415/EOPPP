// RTPG_1773: vars=5 stmts=9
void test_func(void) {
    int v63 = -38;
    int a95 = 97;
    int hi53 = 0;
    int lo43 = -50;
    int b40 = 22382;
    int h0 = 28;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 75; i++) {
        a95 = lo43 ^ a95;
        hi53 = v63 % b40;
        v63 = b40 ^ hi53;
        hi53 = a95 / b40;
        a95 = v63 + -22;
        a95 = a95 % hi53;
        v63 = b40 ^ a95;
        a95 = hi53 * -38;
        a95 = hi53 * 29611;
        if (a95 != 32) {
        hi53 = b40;
        }
    }
}
int main() { test_func(); return 0; }

