// RTPG_9312: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int x49 = -40;
    int lo4 = 28756;
    int tmp78 = 23233;
    int res86 = 11;
    int hi70 = -6;
    int *ptr = &x49;
    int i;
    for (i = 0; i < 64; i++) {
        lo4 = xn[i];
        res86 = x49 + hi70;
        res86 = res86 - 4;
        x49 = tmp78 - 0;
        x49 = lo4 + res86;
        hi70 = hi70 + 3;
        x49 = lo4 - 63606;
        x49 = x49 - 2;
        *ptr = *ptr + 1;
        yo[i] = x49;
    }
}
int main() { test_func(); return 0; }

