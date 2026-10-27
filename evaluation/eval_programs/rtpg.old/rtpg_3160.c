// RTPG_3160: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int hi44 = 22647;
    int cur35 = 3;
    int z21 = 62516;
    int *ptr = &cur35;
    int i;
    for (i = 0; i < 16; i++) {
        hi44 = xn[i];
        z21 = z21 + cur35;
        z21 = hi44;
        cur35 = z21 - hi44;
        hi44 = z21 - cur35;
        *ptr = *ptr + 5;
        yo[i] = hi44;
    }
}
int main() { test_func(); return 0; }

