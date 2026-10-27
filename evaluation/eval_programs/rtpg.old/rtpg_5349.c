// RTPG_5349: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int dat35 = 9;
    int sum40 = 42;
    int cur42 = 0;
    int y72 = 4;
    int b26 = 1;
    int cnt25 = 44;
    int dat0 = 4;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 61223;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        b26 = xn[i];
        y72 = dat0 / sum40;
        cur42 = cnt25 - y72;
        cur42 = b26 % sum40;
        cnt25 = b26 + cnt25;
        dat0 = b26 + dat0;
        if (b26 < 49) {
        cur42 = dat35 + sum40;
        }
        yo[i] = b26;
    }
}
int main() { test_func(); return 0; }

