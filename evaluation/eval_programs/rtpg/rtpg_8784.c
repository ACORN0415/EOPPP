// RTPG_8784: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int out74 = 11683;
    int v27 = 53453;
    int tmp7 = 4;
    int prev74 = 21;
    int tmp48 = 15;
    int hi96 = 1;
    int i;
    for (i = 0; i < 32; i++) {
        tmp48 = xn[i];
        tmp7 = prev74 + hi96;
        hi96 = hi96 + 3;
        v27 = hi96;
        if (v27 == 67) {
        tmp7 = tmp7 - 2;
        }
        yo[i] = out74;
    }
}
int main() { test_func(); return 0; }

