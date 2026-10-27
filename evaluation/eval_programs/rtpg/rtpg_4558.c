// RTPG_4558: vars=3 stmts=3
void test_func(void) {
    int lo3 = 20;
    int cur0 = 85;
    int dat14 = -43;
    int i;
    for (i = 0; i < 47; i++) {
        cur0 = lo3;
        lo3 = lo3;
        cur0 = lo3 - 22572;
    }
}
int main() { test_func(); return 0; }

