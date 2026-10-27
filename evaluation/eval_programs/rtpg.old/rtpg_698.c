// RTPG_698: vars=6 stmts=5
void test_func(void) {
    int prev19 = 6;
    int dat19 = 8;
    int lo30 = 7;
    int y94 = 5;
    int acc71 = 23;
    int sum1 = 6;
    int h0 = 15;
    int sv0 = 0;
    int h1 = 5339;
    int sv1 = 0;
    int h2 = 14004;
    int sv2 = 0;
    int i;
    for (i = 0; i < 14; i++) {
        lo30 = lo30 + 5;
        acc71 = lo30 + lo30;
        dat19 = acc71 - prev19;
        prev19 = sum1 - 4;
        y94 = dat19;
        if (y94 == 14) {
        sum1 = prev19 - 19;
        }
    }
}
int main() { test_func(); return 0; }

