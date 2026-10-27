// RTPG_8482: vars=5 stmts=4
void test_func(void) {
    int acc80 = 64;
    int y40 = 0;
    int x18 = 59;
    int acc49 = 5;
    int res96 = 64551;
    int i;
    for (i = 0; i < 22; i++) {
        acc49 = acc49 + 4;
        y40 = acc49 - 19;
        x18 = y40 | y40;
        acc80 = acc49 | acc49;
        if (res96 <= 15) {
        acc49 = x18 - acc49;
        }
    }
}
int main() { test_func(); return 0; }

