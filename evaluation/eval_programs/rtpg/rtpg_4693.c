// RTPG_4693: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int b19 = 1001;
    int c78 = 60784;
    float y22 = 78.37;
    int a98 = 7;
    int hi94 = 14;
    int i;
    for (i = 0; i < 32; i++) {
        y22 = xn[i];
        b19 = hi94 - y22;
        a98 = hi94;
        hi94 = y22 - a98;
        b19 = b19 - c78;
        if (y22 >= -14) {
        b19 = b19 - 2;
        }
        yo[i] = y22;
    }
}
int main() { test_func(); return 0; }

