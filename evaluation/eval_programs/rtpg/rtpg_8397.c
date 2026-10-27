// RTPG_8397: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int tmp35 = 33;
    int y40 = 7;
    int res25 = -23;
    int lo48 = 12979;
    int hi45 = 37768;
    int *ptr = &tmp35;
    int i;
    for (i = 0; i < 32; i++) {
        tmp35 = xn[i];
        hi45 = y40 + 65;
        tmp35 = res25;
        tmp35 = lo48 - res25;
        tmp35 = res25 - lo48;
        tmp35 = y40;
        y40 = lo48 % y40;
        *ptr = *ptr + 5;
        if (tmp35 >= -40) {
        hi45 = hi45 - 4;
        }
        yo[i] = tmp35;
    }
}
int main() { test_func(); return 0; }

