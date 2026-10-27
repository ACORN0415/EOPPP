// RTPG_8148: vars=3 stmts=5
void test_func(void) {
    int prev94 = 10;
    int res1 = 6;
    int prev84 = 28921;
    int i;
    for (i = 0; i < 43; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        prev94 = res1 + -34;
        prev94 = prev84 + res1;
        res1 = prev84 - res1;
        res1 = res1;
        prev84 = prev94 - prev84;
        }
    }
}
int main() { test_func(); return 0; }

