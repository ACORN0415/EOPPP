// RTPG_7493: vars=8 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int a2 = 19;
    int val59 = -7;
    int x3 = 7;
    int cnt75 = 17;
    int cur37 = 2;
    int b43 = 7;
    int z6 = 4;
    int tmp72 = 65;
    int i;
    for (i = 0; i < 32; i++) {
        cur37 = xn[i];
        a2 = a2 + 2;
        val59 = cur37 + b43;
        yo[i] = cur37;
    }
}
int main() { test_func(); return 0; }

