// RTPG_5201: vars=3 stmts=6
void test_func(void) {
    int res64 = 34922;
    int res20 = 57364;
    int cnt83 = 6;
    int i;
    for (i = 0; i < 38; i++) {
        res20 = res64 + res64;
        res64 = res64 + 5;
        cnt83 = cnt83 + cnt83;
        res64 = res64 - cnt83;
        cnt83 = res20 - res20;
        res20 = res20 - res64;
    }
}
int main() { test_func(); return 0; }

