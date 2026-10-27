// RTPG_1322: vars=4 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int z74 = 54897;
    int v50 = 43;
    int sum77 = 31;
    int tmp34 = 100;
    int i;
    for (i = 0; i < 64; i++) {
        sum77 = xn[i];
        z74 = z74 - 5;
        sum77 = sum77 - 3;
        z74 = sum77 - tmp34;
        z74 = tmp34 - 11366;
        v50 = tmp34;
        tmp34 = v50 + -42;
        yo[i] = z74;
    }
}
int main() { test_func(); return 0; }

