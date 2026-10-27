// RTPG_5069: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int sum84 = 1;
    int x44 = 31461;
    int out24 = 28189;
    int lo86 = 34;
    int val31 = -23;
    int *ptr = &val31;
    int i;
    for (i = 0; i < 32; i++) {
        sum84 = xn[i];
        val31 = out24 + lo86;
        sum84 = lo86;
        *ptr = *ptr + 5;
        yo[i] = lo86;
    }
}
int main() { test_func(); return 0; }

