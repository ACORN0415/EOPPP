// RTPG_4443: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int cnt37 = 97;
    int val18 = -35;
    int cnt67 = 48;
    int b7 = 8;
    int cnt95 = -25;
    int z93 = 41;
    int *ptr = &z93;
    int i;
    for (i = 0; i < 32; i++) {
        b7 = xn[i];
        cnt37 = cnt67;
        cnt37 = z93;
        *ptr = *ptr + 5;
        yo[i] = cnt67;
    }
}
int main() { test_func(); return 0; }

