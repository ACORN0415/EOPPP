// RTPG_803: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int tmp9 = 0;
    int acc63 = 3;
    int b91 = 98;
    int c10 = 12;
    int res86 = 6;
    int res8 = 3;
    int z49 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        b91 = xn[i];
        tmp9 = tmp9 - 1;
        c10 = c10 - res86;
        res86 = z49 - res86;
        acc63 = b91 - c10;
        acc63 = acc63 + 2;
        yo[i] = c10;
    }
}
int main() { test_func(); return 0; }

