// RTPG_9041: vars=7 stmts=12
int idx_arr[16];
void test_func(void) {
    int val90 = 61781;
    int res80 = 13;
    int sum23 = -31;
    int cnt63 = 10;
    int acc77 = 86;
    double tmp62 = 8.43;
    int z72 = 1;
    int i;
    for (i = 0; i < 100; i++) {
        val90 = xn[idx_arr[i]];
        res80 = val90 + sum23;
        tmp62 = tmp62 - acc77;
        res80 = val90 - z72;
        z72 = res80 + sum23;
        z72 = tmp62;
        val90 = res80 + -45;
        cnt63 = tmp62 - val90;
        tmp62 = z72;
        cnt63 = res80 & sum23;
        sum23 = acc77;
        acc77 = acc77 + 4;
        res80 = cnt63 / z72;
    }
}
int main() { test_func(); return 0; }

