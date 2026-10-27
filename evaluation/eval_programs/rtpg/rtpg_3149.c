// RTPG_3149: vars=5 stmts=6
void test_func(void) {
    int y50 = -18;
    int x24 = 55042;
    int res56 = 4;
    int cur12 = 3;
    int x98 = 100;
    int h0 = 11350;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 87; i++) {
        y50 = res56;
        res56 = x24 - cur12;
        x24 = x98 - y50;
        cur12 = y50 + x98;
        cur12 = y50 + cur12;
        x98 = x24 - res56;
    }
}
int main() { test_func(); return 0; }

