// RTPG_7989: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    double z67 = 5.17;
    int cur42 = 31115;
    int prev25 = -46;
    int b82 = 2;
    float cur32 = 97.16;
    int tmp98 = 10;
    float b55 = 51.42;
    int i;
    for (i = 0; i < 64; i++) {
        cur42 = xn[i];
        cur42 = cur32 + z67;
        prev25 = prev25;
        b82 = b82 + cur32;
        tmp98 = prev25;
        b55 = z67;
        yo[i] = z67;
    }
}
int main() { test_func(); return 0; }

