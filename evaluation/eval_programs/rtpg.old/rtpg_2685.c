// RTPG_2685: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int acc85 = 60;
    int tmp47 = 57;
    int dat13 = -12;
    int i;
    for (i = 0; i < 32; i++) {
        dat13 = xn[i];
        tmp47 = tmp47 + tmp47;
        acc85 = acc85 + 4;
        acc85 = acc85 - dat13;
        acc85 = dat13 + tmp47;
        yo[i] = dat13;
    }
}
int main() { test_func(); return 0; }

