// RTPG_149: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int dat82 = 59261;
    int val99 = 5;
    int z78 = 26903;
    int i;
    for (i = 0; i < 32; i++) {
        dat82 = xn[i];
        dat82 = dat82 - 4;
        dat82 = val99 ^ z78;
        z78 = z78;
        dat82 = dat82 | z78;
        z78 = z78 / val99;
        z78 = dat82 - val99;
        yo[i] = dat82;
    }
}
int main() { test_func(); return 0; }

