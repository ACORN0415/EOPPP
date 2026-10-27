// RTPG_4075: vars=3 stmts=5
void test_func(void) {
    int dat32 = 59;
    int lo26 = 41765;
    int res74 = 32;
    int h0 = 38848;
    int sv0 = 0;
    int h1 = 66;
    int sv1 = 0;
    int i;
    for (i = 0; i < 28; i++) {
        lo26 = lo26 - lo26;
        lo26 = lo26 + res74;
        lo26 = res74 - -14;
        res74 = dat32 + 1;
        dat32 = dat32 - 5;
    }
}
int main() { test_func(); return 0; }

