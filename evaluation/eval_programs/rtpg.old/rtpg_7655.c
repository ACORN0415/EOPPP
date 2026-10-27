// RTPG_7655: vars=5 stmts=8
void test_func(void) {
    int x37 = 16;
    int hi43 = 28;
    int res35 = 41754;
    int lo29 = 40;
    int res12 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        lo29 = lo29 + 5;
        x37 = x37 + 5;
        res12 = res12 + 1;
        hi43 = hi43 + x37;
        lo29 = hi43 + x37;
        x37 = res12 - lo29;
        hi43 = hi43 - 1;
        hi43 = hi43 + 8;
    }
}
int main() { test_func(); return 0; }

