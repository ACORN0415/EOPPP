// RTPG_8791: vars=9 stmts=10
void test_func(void) {
    int sum13 = 97;
    int val15 = 7;
    int cur83 = 30;
    int hi49 = -22;
    int val13 = 48;
    int out66 = 13;
    int prev18 = 3;
    int hi18 = 5;
    int tmp17 = 44;
    int *ptr = &val13;
    int i;
    for (i = 0; i < 30; i++) {
        cur83 = sum13 + cur83;
        val13 = hi18 + out66;
        val13 = prev18;
        tmp17 = val13 + 0;
        val15 = sum13;
        hi49 = hi18 + hi49;
        val15 = out66 + 46;
        val13 = val15;
        prev18 = sum13 + 33603;
        out66 = sum13;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

