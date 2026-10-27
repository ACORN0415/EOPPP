// RTPG_4691: vars=4 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int cnt24 = 19937;
    int hi27 = 39;
    int z95 = 22;
    int tmp1 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        cnt24 = xn[i];
        tmp1 = tmp1 - 5;
        z95 = z95 - hi27;
        tmp1 = hi27 - 64;
        hi27 = hi27 - 27;
        tmp1 = hi27 - z95;
        cnt24 = hi27 + tmp1;
        z95 = tmp1;
        hi27 = z95;
        tmp1 = z95 - 59309;
        hi27 = cnt24 + 77;
        cnt24 = hi27 + hi27;
        if (cnt24 == 75) {
        tmp1 = tmp1;
        }
        yo[i] = z95;
    }
}
int main() { test_func(); return 0; }

