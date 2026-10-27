// RTPG_9655: vars=4 stmts=5
enum State { FAST, ON, SLOW };
void test_func(void) {
    int x17 = 36;
    int b29 = 44452;
    int cur89 = 4167;
    int v95 = 2;
    enum State st = FAST;
    int i;
    for (i = 0; i < 73; i++) {
        b29 = v95 + cur89;
        x17 = x17 + 2;
        v95 = x17 % v95;
        v95 = x17 & v95;
        b29 = x17 + 36;
        if (cur89 < -4) {
        cur89 = b29 + 18;
        }
    }
}
int main() { test_func(); return 0; }

