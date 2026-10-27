// RTPG_8092: vars=4 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int hi63 = 24;
    int z96 = -43;
    int sum82 = 14917;
    int z93 = 24;
    int i;
    for (i = 0; i < 16; i++) {
        z96 = xn[i];
        sum82 = z93 + -50;
        z96 = z93 + hi63;
        hi63 = hi63 + z96;
        hi63 = z96;
        z96 = z96 - 4;
        z93 = hi63 + z93;
        z96 = z96 - z93;
        z93 = z93 - z96;
        z93 = z96 + 66;
        if (sum82 >= 93) {
        z96 = z96 - 3;
        }
        yo[i] = z96;
    }
}
int main() { test_func(); return 0; }

