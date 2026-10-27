// RTPG_6215: vars=4 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int prev85 = 34;
    int a82 = 1;
    int sum64 = 25037;
    int v26 = 71;
    int i;
    for (i = 0; i < 32; i++) {
        prev85 = xn[i];
        v26 = prev85 + 32;
        prev85 = v26 - a82;
        sum64 = prev85 - sum64;
        v26 = v26;
        prev85 = prev85 + -46;
        v26 = v26 - v26;
        prev85 = sum64;
        yo[i] = prev85;
    }
}
int main() { test_func(); return 0; }

