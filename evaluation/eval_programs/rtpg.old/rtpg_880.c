// RTPG_880: vars=10 stmts=10
void test_func(void) {
    int v11 = 71;
    int z67 = 1;
    int v75 = 21759;
    int cnt98 = 62850;
    int x36 = 16;
    int out35 = 77;
    int lo7 = 43;
    int x78 = 2;
    int hi37 = 21048;
    int a29 = 10;
    int *ptr = &v75;
    int i;
    for (i = 0; i < 100; i++) {
        lo7 = lo7 - 4;
        cnt98 = lo7 + x78;
        cnt98 = x36 - x78;
        cnt98 = x78 + 2;
        a29 = a29 + 2;
        v11 = cnt98 - out35;
        x36 = x36 + 3;
        a29 = out35 - cnt98;
        v11 = v11 - 4;
        hi37 = z67 - cnt98;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

