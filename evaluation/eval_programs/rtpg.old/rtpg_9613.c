// RTPG_9613: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int hi70 = 27513;
    int x63 = 51111;
    int out73 = 23463;
    int *ptr = &hi70;
    int i;
    for (i = 0; i < 32; i++) {
        x63 = xn[i];
        x63 = out73 + x63;
        x63 = x63 + x63;
        out73 = x63 + x63;
        *ptr = *ptr + 5;
        yo[i] = hi70;
    }
}
int main() { test_func(); return 0; }

