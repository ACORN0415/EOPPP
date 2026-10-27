// RTPG_4642: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int c78 = 1001;
    int b19 = 60784;
    float y22 = 78.37;
    int a98 = 7;
    int hi94 = 14;
    int i;
    for (i = 0; i < 32; i++) {
        y22 = xn[i];
        c78 = hi94 - y22;
        a98 = hi94;
        hi94 = y22 - a98;
        c78 = c78 - b19;
        if (y22 >= -14) {
        c78 = c78 - 2;
        }
        yo[i] = y22;
    }
}
int main() { test_func(); return 0; }

