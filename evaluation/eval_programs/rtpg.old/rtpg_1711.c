// RTPG_1711: vars=3 stmts=6
void test_func(void) {
    int val28 = 29;
    int val88 = 50;
    int v90 = -26;
    int i;
    for (i = 0; i < 38; i++) {
        v90 = v90 - 4;
        v90 = v90 - 14606;
        v90 = v90;
        val28 = val88 - v90;
        val88 = v90;
        v90 = v90 - 4;
        if (val88 != 56) {
        val88 = val88;
        }
    }
}
int main() { test_func(); return 0; }

