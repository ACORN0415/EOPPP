// RTPG_6734: vars=3 stmts=9
void test_func(void) {
    int val31 = 3;
    int v23 = 7;
    int x62 = 49995;
    int i;
    for (i = 0; i < 58; i++) {
        v23 = x62 + v23;
        val31 = val31 + 33;
        x62 = val31 + v23;
        v23 = val31 + x62;
        x62 = val31;
        x62 = v23;
        x62 = val31 - x62;
        val31 = x62 - val31;
        x62 = val31 + v23;
        if (v23 < -10) {
        val31 = x62 - v23;
        }
    }
}
int main() { test_func(); return 0; }

