// RTPG_3633: vars=5 stmts=2
int xn[64];
int yo[64];
enum State { FAST, OFF, BLUE };
void test_func(void) {
    int cur87 = 4;
    int cnt74 = 69;
    int x47 = 19832;
    int cur12 = -42;
    int out10 = 55267;
    enum State st = FAST;
    int *ptr = &cur12;
    int h0 = 59822;
    int sv0 = 0;
    int h1 = 16688;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x47 = xn[i];
        cnt74 = cur12 + x47;
        out10 = cur87;
        *ptr = *ptr + 3;
        if (x47 > 43) {
        cur12 = cur12 - cnt74;
        }
        yo[i] = cnt74;
    }
}
int main() { test_func(); return 0; }

