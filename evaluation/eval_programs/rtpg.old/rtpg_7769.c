// RTPG_7769: vars=7 stmts=11
void test_func(void) {
    int acc31 = -45;
    double x43 = 13.44;
    int cnt92 = 82;
    int prev58 = 21;
    int cur3 = 81;
    int v5 = 10;
    float z46 = 37.63;
    int i;
    for (i = 0; i < 24; i++) {
        x43 = x43 + 2;
        cur3 = cur3 - 3;
        cur3 = acc31;
        cnt92 = v5 + x43;
        acc31 = cur3 - z46;
        acc31 = v5 + v5;
        v5 = cnt92 + 1;
        prev58 = acc31;
        z46 = acc31;
        v5 = v5 + 4;
        z46 = v5 + cur3;
    }
done:
    cur3 = 0;
}
int main() { test_func(); return 0; }

