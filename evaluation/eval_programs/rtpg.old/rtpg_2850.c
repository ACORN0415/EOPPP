// RTPG_2850: vars=6 stmts=5
void test_func(void) {
    int hi63 = -45;
    int dat15 = 55811;
    int val40 = -11;
    int dat62 = 7;
    int out48 = -2;
    int z22 = 32819;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 48;
    int sv1 = 0;
    int h2 = 40616;
    int sv2 = 0;
    int i;
    for (i = 0; i < 38; i++) {
        dat62 = dat62 % dat62;
        out48 = out48 * 9;
        dat15 = out48 + hi63;
        z22 = dat62 * 64;
        val40 = val40 ^ out48;
    }
}
int main() { test_func(); return 0; }

