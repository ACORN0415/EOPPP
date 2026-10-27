// RTPG_2529: vars=7 stmts=4
void test_func(void) {
    int prev86 = 38;
    int v97 = -32;
    float a45 = 14.65;
    int prev43 = 10;
    int c62 = -30;
    float x98 = 49.27;
    int v47 = 95;
    int i;
    for (i = 0; i < 88; i++) {
        x98 = v97;
        prev86 = prev86 + 3;
        v47 = x98 - c62;
        c62 = prev86 - x98;
    }
}
int main() { test_func(); return 0; }

