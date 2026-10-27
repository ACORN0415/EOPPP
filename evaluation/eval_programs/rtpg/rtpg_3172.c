// RTPG_3172: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int y2 = 30;
    int a36 = 47;
    int prev36 = 47727;
    int z91 = 7;
    int hi90 = 39517;
    int i;
    for (i = 0; i < 32; i++) {
        y2 = xn[i];
        prev36 = y2 + y2;
        a36 = y2 + 50;
        hi90 = hi90 - 2;
        prev36 = z91 - a36;
        if (a36 <= 19) {
        y2 = z91 + prev36;
        }
        yo[i] = a36;
    }
}
int main() { test_func(); return 0; }

