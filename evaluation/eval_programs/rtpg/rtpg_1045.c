// RTPG_1045: vars=5 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int v39 = 34;
    int hi47 = 3;
    int x33 = 45;
    int acc1 = 9;
    int acc73 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x33 = xn[i];
        x33 = acc1;
        hi47 = acc73;
        acc73 = acc73;
        acc1 = v39;
        acc1 = acc73 - 44;
        x33 = x33 - 4;
        if (x33 != -48) {
        hi47 = acc1;
        }
        yo[i] = acc1;
    }
}
int main() { test_func(); return 0; }

