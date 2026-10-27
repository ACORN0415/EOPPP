// RTPG_9423: vars=9 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
enum State { SLOW, OFF, FAST };
void test_func(void) {
    int z87 = 24;
    int a91 = 3;
    int b50 = -25;
    int dat10 = -34;
    int cnt46 = 22029;
    int dat1 = -46;
    int b64 = 28986;
    int cur12 = 3;
    int cnt28 = -38;
    enum State st = SLOW;
    int *ptr = &z87;
    int i;
    for (i = 0; i < 16; i++) {
        b50 = xn[i];
        cnt46 = xn[idx_arr[i]];
        cur12 = cnt46 + b50;
        dat1 = a91 + b64;
        b64 = cnt46 + dat1;
        dat10 = dat10 + 4;
        cnt46 = cnt46;
        *ptr = *ptr + 5;
        yo[i] = z87;
    }
}
int main() { test_func(); return 0; }

