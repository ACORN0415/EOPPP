// RTPG_7131: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int lo30 = 8120;
    int lo12 = 54;
    int out95 = 16;
    int hi32 = 64165;
    int *ptr = &lo12;
    int i;
    for (i = 0; i < 64; i++) {
        lo30 = xn[i];
        hi32 = hi32 - 3;
        lo12 = lo12;
        lo12 = lo30 - lo12;
        hi32 = lo12 - lo12;
        out95 = lo12 + hi32;
        *ptr = *ptr + 3;
        yo[i] = lo30;
    }
}
int main() { test_func(); return 0; }

