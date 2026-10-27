// RTPG_8534: vars=3 stmts=5
void test_func(void) {
    int v42 = 40;
    int cur45 = 1;
    int b51 = 52015;
    int i;
    for (i = 0; i < 82; i++) {
        v42 = v42 - cur45;
        b51 = b51 + cur45;
        cur45 = cur45 - 2;
        cur45 = v42 + 33;
        cur45 = b51 + -34;
    }
}
int main() { test_func(); return 0; }

