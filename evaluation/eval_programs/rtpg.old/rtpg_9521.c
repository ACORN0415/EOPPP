// RTPG_9521: vars=9 stmts=3
int xn[64];
int yo[64];
enum State { BLUE, GREEN, FAST };
void test_func(void) {
    int c41 = 31;
    int lo77 = 38;
    int cur97 = -36;
    int prev82 = 4;
    int val21 = 37842;
    int a55 = 42;
    int c62 = 64736;
    int out81 = 35;
    int v50 = 9;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 64; i++) {
        c41 = xn[i];
        lo77 = lo77 + 1;
        c62 = lo77;
        c41 = lo77 - prev82;
        yo[i] = a55;
    }
}
int main() { test_func(); return 0; }

