// RTPG_4549: vars=3 stmts=6
void test_func(void) {
    int dat8 = 49;
    int acc36 = 59;
    int val34 = 19459;
    int i;
    for (i = 0; i < 46; i++) {
        acc36 = acc36 - acc36;
        acc36 = dat8;
        val34 = acc36;
        dat8 = acc36 - 0;
        dat8 = dat8;
        dat8 = dat8;
    }
}
int main() { test_func(); return 0; }

