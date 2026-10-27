// RTPG_7040: vars=5 stmts=4
void test_func(void) {
    int dat62 = 32453;
    int dat24 = 60;
    int v57 = 61;
    int val72 = 4;
    int cur23 = 24526;
    int i;
    for (i = 0; i < 8; i++) {
        val72 = cur23 + dat62;
        v57 = val72;
        cur23 = val72;
        dat24 = v57 + cur23;
    }
}
int main() { test_func(); return 0; }

