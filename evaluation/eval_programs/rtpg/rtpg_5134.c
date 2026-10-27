// RTPG_5134: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int cnt55 = 31;
    int lo1 = 33;
    int prev64 = 40;
    int c71 = 65;
    int i;
    for (i = 0; i < 16; i++) {
        prev64 = xn[i];
        cnt55 = c71 + lo1;
        lo1 = cnt55 + 10924;
        yo[i] = prev64;
    }
}
int main() { test_func(); return 0; }

