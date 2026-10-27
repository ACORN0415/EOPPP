// RTPG_6776: vars=7 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int prev24 = 66;
    int cur84 = 10;
    int dat74 = 9;
    int z30 = 10;
    int acc39 = 30;
    int sum36 = 30;
    int dat79 = 95;
    int i;
    for (i = 0; i < 64; i++) {
        z30 = xn[i];
        dat74 = dat79;
        prev24 = cur84 - dat79;
        dat79 = prev24;
        z30 = z30 + z30;
        sum36 = cur84 - prev24;
        acc39 = cur84;
        cur84 = cur84 - 1;
        dat74 = acc39 + 28942;
        acc39 = acc39 + 5;
        yo[i] = prev24;
    }
}
int main() { test_func(); return 0; }

