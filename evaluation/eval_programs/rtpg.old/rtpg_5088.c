// RTPG_5088: vars=4 stmts=4
void test_func(void) {
    int dat77 = 14745;
    int cnt64 = 0;
    int c92 = 9;
    float cur12 = 53.26;
    int i;
    for (i = 0; i < 92; i++) {
        c92 = dat77 - cnt64;
        dat77 = dat77 + cur12;
        c92 = c92 - cur12;
        c92 = cnt64 - c92;
    }
}
int main() { test_func(); return 0; }

