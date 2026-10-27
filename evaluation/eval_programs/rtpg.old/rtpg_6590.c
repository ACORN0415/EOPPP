// RTPG_6590: vars=9 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc2 = 2;
    int z0 = 31546;
    int tmp37 = 17970;
    int cnt48 = 1;
    int cnt49 = 0;
    int cur46 = 30;
    int b31 = 54670;
    int res98 = 50;
    int lo15 = -36;
    int i;
    for (i = 0; i < 32; i++) {
        b31 = xn[i];
        cnt49 = b31 - 2;
        cnt49 = cur46 - cnt49;
        cnt49 = cnt49 + 2;
        cnt48 = cur46;
        b31 = tmp37 - cnt49;
        cnt49 = b31 - cnt49;
        cnt49 = b31 + 40;
        yo[i] = acc2;
    }
}
int main() { test_func(); return 0; }

