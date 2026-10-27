// RTPG_5797: vars=10 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int c64 = 26157;
    int out25 = -7;
    int res38 = 6079;
    int dat56 = 95;
    int res20 = 53;
    int hi84 = 33111;
    int lo79 = 5;
    int b50 = -25;
    int val57 = 38;
    int lo16 = 1;
    int *ptr = &lo79;
    int i;
    for (i = 0; i < 64; i++) {
        dat56 = xn[i];
        dat56 = hi84 - 21624;
        res20 = res20 + 3;
        *ptr = *ptr + 4;
        if (c64 > 45196) goto done;
        yo[i] = out25;
    }
done:
    c64 = 0;
}
int main() { test_func(); return 0; }

