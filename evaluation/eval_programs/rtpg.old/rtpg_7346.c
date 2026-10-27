// RTPG_7346: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int prev43 = 58;
    int cnt70 = 76;
    int val34 = 32418;
    int lo55 = 23;
    int *ptr = &val34;
    int i;
    for (i = 0; i < 32; i++) {
        val34 = xn[i];
        val34 = val34 - 3;
        lo55 = lo55 + 56554;
        lo55 = lo55 + 3;
        val34 = lo55 - 58;
        *ptr = *ptr + 2;
        if (lo55 > 18) {
        val34 = cnt70 + 48;
        }
        yo[i] = lo55;
    }
}
int main() { test_func(); return 0; }

