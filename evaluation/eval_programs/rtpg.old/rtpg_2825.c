// RTPG_2825: vars=3 stmts=3
void test_func(void) {
    int val88 = 47;
    int cur52 = 5;
    int b22 = 44041;
    int *ptr = &b22;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 26;
    int sv1 = 0;
    int i;
    for (i = 0; i < 81; i++) {
        val88 = cur52;
        val88 = b22 - val88;
        cur52 = cur52;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

