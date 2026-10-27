// RTPG_1498: vars=10 stmts=6
int idx_arr[16];
void test_func(void) {
    int val1 = 9;
    int out87 = 2;
    int a10 = 27625;
    int cnt51 = -48;
    int cur93 = 33576;
    int out8 = 10;
    int z28 = 33773;
    int out51 = 46854;
    int z79 = -36;
    int a74 = 45;
    int *ptr = &cnt51;
    int h0 = 37;
    int sv0 = 0;
    int h1 = 16;
    int sv1 = 0;
    int h2 = 60351;
    int sv2 = 0;
    int h3 = 38150;
    int sv3 = 0;
    int i;
    for (i = 0; i < 91; i++) {
        out51 = xn[idx_arr[i]];
        z79 = out87 / cur93;
        cnt51 = val1 / z79;
        a74 = z28 + cur93;
        out87 = a10 & out87;
        z79 = a74 / out51;
        a74 = cnt51 * 62;
        *ptr = *ptr + 3;
        if (out87 == 65) {
        val1 = cnt51;
        }
    }
}
int main() { test_func(); return 0; }

