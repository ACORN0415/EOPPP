// RTPG_2097: vars=8 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cur96 = 7;
    int v68 = 1;
    float acc40 = 10.27;
    double val12 = 73.96;
    int hi26 = 18579;
    int hi52 = 33;
    int a40 = 5;
    int v32 = 41;
    int i;
    for (i = 0; i < 64; i++) {
        a40 = xn[i];
        hi52 = xn[idx_arr[i]];
        hi26 = hi26 - 3;
        cur96 = cur96 - 4;
        cur96 = v68;
        a40 = a40 - acc40;
        hi52 = acc40 - a40;
        v68 = v68 - 3;
        yo[i] = v68;
    }
}
int main() { test_func(); return 0; }

