// RTPG_6170: vars=7 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int x32 = 6;
    int y64 = -45;
    int out0 = 36072;
    int y59 = 53;
    int c67 = 52963;
    int b14 = 7;
    int acc70 = 88;
    int i;
    for (i = 0; i < 32; i++) {
        out0 = xn[i];
        b14 = out0;
        y59 = c67 + b14;
        x32 = out0 - x32;
        y59 = y64 + c67;
        x32 = y64 + b14;
        yo[i] = out0;
    }
}
int main() { test_func(); return 0; }

