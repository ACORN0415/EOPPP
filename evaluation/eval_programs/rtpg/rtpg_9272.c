// RTPG_9272: vars=4 stmts=10
void test_func(void) {
    int c75 = 3;
    int a36 = 63358;
    int prev53 = 58;
    int v96 = 48891;
    int *ptr = &v96;
    int h0 = 22;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 95; i++) {
        v96 = v96 + 2;
        prev53 = a36 + prev53;
        a36 = a36 * 18;
        prev53 = v96 * 6;
        prev53 = prev53 * -3;
        c75 = prev53 * 0;
        prev53 = prev53 * 15814;
        a36 = a36 - v96;
        prev53 = v96 + prev53;
        c75 = c75 + v96;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

