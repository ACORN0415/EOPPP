// RTPG_4104: vars=3 stmts=5
void test_func(void) {
    int res74 = 59;
    int dat32 = 41765;
    int lo26 = 32;
    int h0 = 38848;
    int sv0 = 0;
    int h1 = 66;
    int sv1 = 0;
    int i;
    for (i = 0; i < 28; i++) {
        dat32 = dat32 - dat32;
        dat32 = dat32 + lo26;
        dat32 = lo26 - -14;
        lo26 = res74 + 1;
        res74 = res74 - 5;
    }
}
int main() { test_func(); return 0; }

