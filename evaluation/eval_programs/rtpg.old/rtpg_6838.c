// RTPG_6838: vars=7 stmts=7
void test_func(void) {
    int x2 = 9;
    int cur73 = 16;
    int v84 = 4;
    int out18 = 32;
    int a59 = 45;
    int v69 = -5;
    int a23 = 6;
    int i;
    for (i = 0; i < 75; i++) {
        a59 = a59 + 5;
        out18 = cur73 - a23;
        out18 = v84 - v69;
        a59 = v69;
        x2 = x2 + 4;
        out18 = out18 + 1;
        cur73 = v69 - a23;
    }
}
int main() { test_func(); return 0; }

