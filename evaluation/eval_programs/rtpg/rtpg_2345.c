// RTPG_2345: vars=3 stmts=3
void test_func(void) {
    int prev42 = -1;
    int v19 = 16;
    int y8 = 57154;
    int i;
    for (i = 0; i < 45; i++) {
        v19 = v19 - 1;
        prev42 = y8;
        y8 = v19 + -25;
    }
}
int main() { test_func(); return 0; }

