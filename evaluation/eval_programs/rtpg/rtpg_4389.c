// RTPG_4389: vars=9 stmts=5
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int z7 = 8;
    int hi38 = 35316;
    int z33 = 10;
    int z15 = -38;
    int out72 = 16541;
    int prev73 = 13;
    int z81 = 0;
    int cnt13 = -4;
    int dat6 = 9;
    struct Pair s; s.a = 25238; s.b = -15;
    int i;
    for (i = 0; i < 64; i++) {
        z81 = xn[i];
        out72 = z33 + 5;
        z15 = out72 - 8;
        hi38 = z15 - dat6;
        z33 = z15;
        hi38 = z33 + -8;
        s.a = s.a + s.b;
        yo[i] = z33;
    }
}
int main() { test_func(); return 0; }

