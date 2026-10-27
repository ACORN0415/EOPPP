// RTPG_204: vars=9 stmts=5
int idx_arr[32];
void test_func(void) {
    int a58 = 8;
    int z43 = -2;
    int y7 = 10;
    int lo3 = -30;
    int sum78 = 1;
    int y55 = 22720;
    int v74 = -43;
    int v32 = 60726;
    int a22 = 59;
    int i;
    for (i = 0; i < 56; i++) {
        sum78 = xn[idx_arr[i]];
        a22 = v32;
        a22 = a22 - 2;
        a22 = a58 - 3;
        y7 = a22 - a58;
        sum78 = v74 - y55;
        if (sum78 > 7) goto done;
    }
done:
    v74 = 0;
}
int main() { test_func(); return 0; }

