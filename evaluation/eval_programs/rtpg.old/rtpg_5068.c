// RTPG_5068: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int acc51 = -1;
    int cnt80 = 0;
    int res98 = 30;
    int tmp73 = 55577;
    int lo2 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        acc51 = xn[i];
        cnt80 = lo2 - acc51;
        tmp73 = tmp73 + -50;
        lo2 = tmp73 - cnt80;
        cnt80 = lo2 - cnt80;
        yo[i] = tmp73;
    }
}
int main() { test_func(); return 0; }

