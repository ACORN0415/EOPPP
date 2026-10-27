// RTPG_8517: vars=3 stmts=5
void test_func(void) {
    int res56 = 20;
    int dat67 = 16772;
    int dat32 = 38249;
    int i;
    for (i = 0; i < 47; i++) {
        res56 = res56 + 2;
        dat67 = dat67 + 4;
        dat67 = dat67 + 5;
        res56 = dat67 + 6340;
        res56 = dat32 - 3600;
    }
}
int main() { test_func(); return 0; }

