// RTPG_4500: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int cnt67 = 97;
    int val18 = -35;
    int z93 = 48;
    int cnt37 = 8;
    int cnt95 = -25;
    int b7 = 41;
    int *ptr = &b7;
    int i;
    for (i = 0; i < 32; i++) {
        cnt37 = xn[i];
        cnt67 = z93;
        cnt67 = b7;
        *ptr = *ptr + 5;
        yo[i] = z93;
    }
}
int main() { test_func(); return 0; }

