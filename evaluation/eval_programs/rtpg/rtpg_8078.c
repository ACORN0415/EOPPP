// RTPG_8078: vars=4 stmts=12
void test_func(void) {
    int lo4 = 8;
    int c88 = 29;
    int dat1 = 228;
    int cur5 = 9;
    int i;
    for (i = 0; i < 44; i++) {
        cur5 = lo4 - cur5;
        lo4 = cur5 - c88;
        lo4 = dat1 - 0;
        lo4 = cur5 - dat1;
        c88 = c88 - 5;
        c88 = lo4 + c88;
        lo4 = lo4 - 4;
        lo4 = lo4 - 18;
        cur5 = c88 + lo4;
        cur5 = cur5;
        cur5 = cur5 + 1;
        c88 = c88 - 2;
        if (lo4 > 76) {
        c88 = cur5;
        }
    }
}
int main() { test_func(); return 0; }

