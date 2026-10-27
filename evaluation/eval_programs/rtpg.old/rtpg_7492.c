// RTPG_7492: vars=7 stmts=5
void test_func(void) {
    int cur21 = 10;
    int res29 = 6426;
    int x21 = 20;
    int val72 = 88;
    float cur63 = 69.10;
    double y72 = 69.99;
    int tmp8 = 5;
    int i;
    for (i = 0; i < 9; i++) {
        cur21 = res29 + val72;
        val72 = cur21 + y72;
        cur63 = cur63 - 5;
        tmp8 = res29 ^ val72;
        cur21 = cur21;
    }
}
int main() { test_func(); return 0; }

