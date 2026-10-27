// RTPG_1758: vars=4 stmts=5
void test_func(void) {
    int b64 = 7;
    int v58 = 0;
    int val60 = 4;
    int c46 = 15570;
    int i;
    for (i = 0; i < 31; i++) {
        val60 = val60 + 3;
        c46 = val60 + v58;
        val60 = c46 - 6;
        c46 = c46 - val60;
        b64 = c46 + v58;
    }
}
int main() { test_func(); return 0; }

