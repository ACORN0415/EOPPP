// RTPG_5308: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int a86 = 14048;
    int prev67 = 39;
    int x92 = 10;
    int z15 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        x92 = xn[i];
        prev67 = z15 + 27936;
        prev67 = a86 + prev67;
        yo[i] = z15;
    }
}
int main() { test_func(); return 0; }

