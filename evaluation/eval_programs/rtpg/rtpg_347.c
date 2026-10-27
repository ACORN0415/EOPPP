// RTPG_347: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int val98 = 42;
    int z33 = 87;
    int prev39 = 16569;
    int z76 = 62111;
    int z63 = 7;
    int prev3 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        prev39 = xn[i];
        prev39 = z33 - prev39;
        prev3 = z33 + z76;
        prev39 = prev39 + z33;
        prev3 = z76 - prev39;
        yo[i] = z33;
    }
}
int main() { test_func(); return 0; }

