// RTPG_8205: vars=4 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int hi63 = 24;
    int sum82 = -43;
    int z93 = 14917;
    int z96 = 24;
    int i;
    for (i = 0; i < 16; i++) {
        sum82 = xn[i];
        z93 = z96 + -50;
        sum82 = z96 + hi63;
        hi63 = hi63 + sum82;
        hi63 = sum82;
        sum82 = sum82 - 4;
        z96 = hi63 + z96;
        sum82 = sum82 - z96;
        z96 = z96 - sum82;
        z96 = sum82 + 66;
        if (z93 >= 93) {
        sum82 = sum82 - 3;
        }
        yo[i] = sum82;
    }
}
int main() { test_func(); return 0; }

