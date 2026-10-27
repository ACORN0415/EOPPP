// RTPG_2272: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc2 = 3;
    int z63 = 45;
    int cnt59 = 45;
    int i;
    for (i = 0; i < 32; i++) {
        acc2 = xn[i];
        z63 = acc2;
        z63 = z63 - 5;
        z63 = cnt59;
        z63 = z63 + 2;
        z63 = z63 - 3;
        acc2 = cnt59 - cnt59;
        z63 = acc2 - 41;
        yo[i] = z63;
    }
}
int main() { test_func(); return 0; }

