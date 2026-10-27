// RTPG_6674: vars=3 stmts=5
void test_func(void) {
    int out42 = 40;
    int prev65 = 10559;
    int tmp68 = 2;
    int i;
    for (i = 0; i < 72; i++) {
        prev65 = tmp68 + out42;
        prev65 = prev65 - out42;
        out42 = tmp68 - prev65;
        prev65 = prev65 - 2;
        tmp68 = out42;
        if (tmp68 >= 48) {
        prev65 = tmp68;
        }
    }
}
int main() { test_func(); return 0; }

