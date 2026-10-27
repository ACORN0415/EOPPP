// RTPG_3268: vars=6 stmts=4
void test_func(void) {
    int val22 = 14800;
    int prev1 = 1;
    int v9 = 33;
    int cnt81 = -2;
    int x25 = 21;
    int val79 = 1;
    int i;
    for (i = 0; i < 71; i++) {
        val79 = val22;
        val22 = val22 - cnt81;
        val22 = v9 - prev1;
        val22 = v9 + -50;
    }
}
int main() { test_func(); return 0; }

