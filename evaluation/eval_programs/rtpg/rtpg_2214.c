// RTPG_2214: vars=4 stmts=3
void test_func(void) {
    int x91 = 29253;
    int res58 = 4;
    int x88 = 8;
    int cur27 = -4;
    int i;
    for (i = 0; i < 21; i++) {
        res58 = x91 - cur27;
        x91 = x91 + 5;
        x91 = cur27;
    }
}
int main() { test_func(); return 0; }

