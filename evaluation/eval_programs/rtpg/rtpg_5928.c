// RTPG_5928: vars=4 stmts=3
void test_func(void) {
    int prev42 = 43411;
    int hi20 = 49;
    int lo98 = -2;
    int y73 = -48;
    int i;
    for (i = 0; i < 47; i++) {
        prev42 = prev42 - prev42;
        prev42 = lo98 - 6;
        hi20 = y73;
    }
}
int main() { test_func(); return 0; }

