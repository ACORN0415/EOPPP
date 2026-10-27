// RTPG_9343: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int prev62 = 0;
    int x15 = 10;
    int a18 = 0;
    int z67 = 30947;
    int hi77 = 9;
    int cnt87 = 2;
    double cur50 = 75.99;
    int i;
    for (i = 0; i < 16; i++) {
        hi77 = xn[i];
        cur50 = cur50 + 3;
        hi77 = hi77;
        a18 = cnt87 + hi77;
        cur50 = a18 - cur50;
        prev62 = prev62 - 4;
        if (a18 != -33) {
        cur50 = prev62 + a18;
        }
        yo[i] = z67;
    }
}
int main() { test_func(); return 0; }

