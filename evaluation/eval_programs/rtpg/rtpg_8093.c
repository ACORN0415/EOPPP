// RTPG_8093: vars=10 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int lo42 = 83;
    int hi9 = 55426;
    int b27 = 61;
    int cnt74 = 70;
    int tmp39 = 11786;
    int cnt75 = 7;
    int v84 = 25570;
    int v44 = 5;
    int v26 = -29;
    int cnt15 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        cnt15 = xn[i];
        v44 = hi9;
        v84 = lo42;
        cnt15 = b27 - cnt15;
        hi9 = cnt15 - 3;
        tmp39 = v44 - hi9;
        yo[i] = cnt74;
    }
}
int main() { test_func(); return 0; }

