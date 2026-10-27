// RTPG_1698: vars=5 stmts=4
void test_func(void) {
    int b49 = 32;
    int c31 = 86;
    int v70 = 38;
    int a59 = 45;
    int hi41 = 6;
    int *ptr = &b49;
    int h0 = 18143;
    int sv0 = 0;
    int h1 = 88;
    int sv1 = 0;
    int i;
    for (i = 0; i < 57; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        c31 = c31 + 1;
        b49 = b49 + a59;
        hi41 = a59 - v70;
        a59 = hi41 + b49;
        }
    }
}
int main() { test_func(); return 0; }

