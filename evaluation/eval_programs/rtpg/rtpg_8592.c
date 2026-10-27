// RTPG_8592: vars=10 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int acc3 = 5;
    int v8 = 40;
    int prev70 = 27724;
    int out25 = 65;
    int c69 = 48231;
    int prev40 = 1;
    int prev77 = 5;
    int a15 = 4;
    int a21 = 49984;
    int prev81 = 38;
    int i;
    for (i = 0; i < 16; i++) {
        out25 = xn[i];
        a21 = a21 + 1;
        prev70 = v8 | out25;
        out25 = c69 - 88;
        v8 = v8 + 1;
        prev40 = a21 % acc3;
        a15 = prev77 - acc3;
        prev77 = prev81;
        a21 = a21 - 3;
        acc3 = acc3 + 1;
        a15 = acc3;
        prev70 = prev70 + 5;
        prev70 = prev70 + 4;
        yo[i] = out25;
    }
}
int main() { test_func(); return 0; }

