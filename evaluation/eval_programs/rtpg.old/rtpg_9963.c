// RTPG_9963: vars=6 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int prev72 = 6;
    int cur37 = 6;
    int z95 = 13432;
    int lo9 = 3;
    int v69 = -32;
    int dat30 = 3;
    int *ptr = &cur37;
    int i;
    for (i = 0; i < 16; i++) {
        z95 = xn[i];
        cur37 = v69 + 38;
        prev72 = lo9 + prev72;
        lo9 = lo9 + 19352;
        *ptr = *ptr + 4;
        yo[i] = prev72;
    }
}
int main() { test_func(); return 0; }

