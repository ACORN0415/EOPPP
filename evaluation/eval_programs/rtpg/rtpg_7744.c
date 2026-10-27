// RTPG_7744: vars=4 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
enum State { GREEN, OFF, FAST };
void test_func(void) {
    int a92 = 8379;
    int v31 = 1;
    int cur19 = 5;
    int c23 = -13;
    enum State st = GREEN;
    int *ptr = &c23;
    int h0 = -5;
    int sv0 = 0;
    int h1 = 33;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a92 = xn[i];
        v31 = xn[idx_arr[i]];
        c23 = c23 + c23;
        a92 = cur19 * 71;
        *ptr = *ptr + 1;
        if (a92 > -2) {
        v31 = a92 - v31;
        }
        yo[i] = a92;
    }
}
int main() { test_func(); return 0; }

