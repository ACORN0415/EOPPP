// RTPG_346: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int z33 = 42;
    int val98 = 87;
    int prev3 = 16569;
    int z63 = 62111;
    int z76 = 7;
    int prev39 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        prev3 = xn[i];
        prev3 = val98 - prev3;
        prev39 = val98 + z63;
        prev3 = prev3 + val98;
        prev39 = z63 - prev3;
        yo[i] = val98;
    }
}
int main() { test_func(); return 0; }

