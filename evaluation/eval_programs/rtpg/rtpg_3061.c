// RTPG_3061: vars=5 stmts=6
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int b89 = 25;
    int v9 = 9;
    int val13 = 0;
    int val18 = 10;
    int v19 = 92;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v19 = xn[i];
        val13 = xn[idx_arr[i]];
        val13 = val13 - 2;
        v19 = v9;
        val18 = val18 - 1;
        val13 = b89 + 9;
        v9 = v9;
        b89 = val13;
        yo[i] = v19;
    }
}
int main() { test_func(); return 0; }

