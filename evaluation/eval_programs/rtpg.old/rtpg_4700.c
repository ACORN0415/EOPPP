// RTPG_4700: vars=6 stmts=3
void test_func(void) {
    int v6 = 46116;
    int v16 = 77;
    int prev84 = 9;
    int cur68 = 32559;
    int res89 = 45544;
    int res97 = 5;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 46;
    int sv1 = 0;
    int h2 = 8;
    int sv2 = 0;
    int i;
    for (i = 0; i < 84; i++) {
        v6 = prev84 + 64;
        cur68 = v6 - v16;
        res89 = prev84 + v16;
        if (prev84 < -17) {
        prev84 = res97 + res89;
        }
    }
}
int main() { test_func(); return 0; }

