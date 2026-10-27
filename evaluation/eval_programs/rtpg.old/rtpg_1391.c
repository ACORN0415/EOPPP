// RTPG_1391: vars=5 stmts=2
enum State { OFF, BLUE, GREEN };
void test_func(void) {
    int tmp5 = 8;
    int cur3 = 37;
    int val64 = 57247;
    int tmp66 = 35364;
    int lo40 = 90;
    enum State st = OFF;
    int i;
    for (i = 0; i < 31; i++) {
        lo40 = lo40 - 2;
        tmp5 = tmp66 + 5;
    }
}
int main() { test_func(); return 0; }

