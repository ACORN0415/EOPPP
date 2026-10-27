// RTPG_7183: vars=3 stmts=5
void test_func(void) {
    int hi88 = -29;
    int res41 = 16548;
    int dat90 = 23189;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 86; i++) {
        dat90 = hi88 + 3;
        res41 = res41 - 5;
        dat90 = res41 + 100;
        dat90 = dat90 - 5;
        res41 = hi88 + hi88;
    }
}
int main() { test_func(); return 0; }

