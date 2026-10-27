// RTPG_8655: vars=4 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int res64 = 5352;
    int acc85 = 4;
    int cur8 = 3;
    int cur63 = 80;
    int i;
    for (i = 0; i < 64; i++) {
        cur63 = xn[i];
        cur8 = cur8 + 5;
        res64 = acc85 + res64;
        res64 = res64 - 1;
        cur8 = res64;
        cur8 = cur8 - 1;
        acc85 = res64;
        acc85 = res64;
        res64 = res64 - 5;
        yo[i] = acc85;
    }
}
int main() { test_func(); return 0; }

