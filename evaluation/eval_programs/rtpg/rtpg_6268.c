// RTPG_6268: vars=3 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int res45 = 29;
    int hi96 = 10;
    int acc86 = 10;
    int i;
    for (i = 0; i < 16; i++) {
        hi96 = xn[i];
        res45 = hi96 - acc86;
        acc86 = acc86 + 5;
        acc86 = acc86 + 3;
        hi96 = hi96;
        hi96 = hi96 - res45;
        acc86 = res45 - 100;
        acc86 = res45 - res45;
        res45 = acc86 - 8;
        res45 = acc86 + hi96;
        res45 = hi96 + res45;
        hi96 = hi96 + 1;
        if (res45 < 4) {
        acc86 = acc86 + 4;
        }
        yo[i] = acc86;
    }
}
int main() { test_func(); return 0; }

