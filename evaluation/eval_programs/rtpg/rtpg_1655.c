// RTPG_1655: vars=3 stmts=8
void test_func(void) {
    int a51 = 4;
    int x33 = 81;
    int c41 = 16;
    int i;
    for (i = 0; i < 62; i++) {
        c41 = c41 - a51;
        c41 = c41 - x33;
        c41 = a51 - c41;
        c41 = a51 + 7;
        x33 = x33 + a51;
        x33 = c41;
        c41 = c41 + a51;
        x33 = x33 + x33;
        if (x33 != -4) {
        x33 = x33 - c41;
        }
    }
}
int main() { test_func(); return 0; }

