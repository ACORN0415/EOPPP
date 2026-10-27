// RTPG_5690: vars=7 stmts=3
void test_func(void) {
    int hi53 = 4;
    float x70 = 66.05;
    int cnt63 = 3221;
    int cnt64 = -33;
    int cur62 = 12828;
    int res97 = 5;
    int acc7 = 30;
    int i;
    for (i = 0; i < 63; i++) {
        x70 = hi53 ^ cnt63;
        res97 = cnt64 + x70;
        x70 = hi53 + 3;
    }
}
int main() { test_func(); return 0; }

