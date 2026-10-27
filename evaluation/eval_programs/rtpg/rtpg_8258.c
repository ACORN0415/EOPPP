// RTPG_8258: vars=3 stmts=5
void test_func(void) {
    int x50 = 5;
    int v15 = 63;
    int hi73 = 31357;
    int i;
    for (i = 0; i < 59; i++) {
        x50 = x50 - v15;
        hi73 = x50 - 4;
        x50 = v15 + hi73;
        v15 = x50 + v15;
        hi73 = v15 + 21238;
    }
}
int main() { test_func(); return 0; }

