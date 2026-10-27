// RTPG_7861: vars=7 stmts=11
void test_func(void) {
    int x43 = -45;
    double prev58 = 13.44;
    int cur3 = 82;
    int cnt92 = 21;
    int v5 = 81;
    int z46 = 10;
    float acc31 = 37.63;
    int i;
    for (i = 0; i < 24; i++) {
        prev58 = prev58 + 2;
        v5 = v5 - 3;
        v5 = x43;
        cur3 = z46 + prev58;
        x43 = v5 - acc31;
        x43 = z46 + z46;
        z46 = cur3 + 1;
        cnt92 = x43;
        acc31 = x43;
        z46 = z46 + 4;
        acc31 = z46 + v5;
    }
}
int main() { test_func(); return 0; }

