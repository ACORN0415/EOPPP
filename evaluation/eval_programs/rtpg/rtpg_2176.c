// RTPG_2176: vars=9 stmts=8
enum State { OFF, RED, ON };
void test_func(void) {
    int val8 = 4;
    int val27 = 10;
    int b15 = 7;
    int tmp90 = 10;
    int cnt53 = 1;
    int v6 = -1;
    int sum95 = 6;
    int y74 = 3;
    int y89 = 3;
    enum State st = OFF;
    int i;
    for (i = 0; i < 12; i++) {
        cnt53 = y89;
        y89 = y89 - cnt53;
        y89 = y89 + b15;
        b15 = v6 + y89;
        sum95 = sum95 - 2;
        cnt53 = y74 - 33;
        tmp90 = val8;
        y89 = y89 + 4;
    }
}
int main() { test_func(); return 0; }

