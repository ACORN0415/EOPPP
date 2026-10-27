// RTPG_3487: vars=5 stmts=8
void test_func(void) {
    int x41 = -22;
    int hi39 = 10;
    int lo45 = 9;
    int z55 = 23;
    int c58 = 23;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 23199;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x41 = lo45 * 7;
        c58 = lo45 * 7672;
        hi39 = hi39 + x41;
        hi39 = c58;
        c58 = hi39 * 20;
        z55 = z55 + z55;
        x41 = z55;
        lo45 = lo45 * -18;
    }
}
int main() { test_func(); return 0; }

