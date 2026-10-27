// RTPG_2799: vars=7 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int a42 = 16946;
    int val32 = 54517;
    int tmp94 = 51492;
    int hi80 = 43971;
    int tmp72 = 43496;
    int x35 = 14730;
    int sum17 = 4;
    int i;
    for (i = 0; i < 64; i++) {
        a42 = xn[i];
        tmp72 = a42 - x35;
        tmp72 = val32 + tmp94;
        val32 = sum17 - 20;
        x35 = x35 - a42;
        a42 = sum17 % tmp94;
        sum17 = val32 ^ a42;
        if (tmp94 < 29) {
        hi80 = tmp94 + a42;
        }
        yo[i] = hi80;
    }
}
int main() { test_func(); return 0; }

