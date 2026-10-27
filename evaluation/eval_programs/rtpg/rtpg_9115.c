// RTPG_9115: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int c75 = 30;
    int a61 = 42;
    int a39 = 33885;
    int v21 = 2;
    int out54 = 2;
    int v36 = -8;
    int lo33 = 71;
    int h0 = 4;
    int sv0 = 0;
    int h1 = -15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        out54 = xn[i];
        v36 = a39 ^ out54;
        a39 = a39 + 5;
        a39 = a61 / lo33;
        v21 = v36 + v21;
        yo[i] = a39;
    }
}
int main() { test_func(); return 0; }

