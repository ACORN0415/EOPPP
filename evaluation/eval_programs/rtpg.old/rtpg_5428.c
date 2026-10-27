// RTPG_5428: vars=7 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int b68 = 2;
    int y48 = 3;
    int y26 = 37656;
    int a48 = 10;
    int tmp84 = -6;
    int a3 = 1;
    int a53 = 32;
    int *ptr = &y26;
    int i;
    for (i = 0; i < 32; i++) {
        b68 = xn[i];
        b68 = tmp84;
        b68 = a48 + 55674;
        tmp84 = a3 - 0;
        y26 = a53 + a53;
        y48 = y26;
        a3 = y48;
        y48 = b68 + tmp84;
        a3 = a53 - a3;
        a53 = y26 - a53;
        *ptr = *ptr + 4;
        if (y26 > 52) {
        y26 = y48 + 39;
        }
        yo[i] = tmp84;
    }
}
int main() { test_func(); return 0; }

