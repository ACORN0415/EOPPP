// RTPG_2926: vars=3 stmts=10
void test_func(void) {
    int y37 = 25;
    int x25 = 10;
    int cur61 = 2;
    int i;
    for (i = 0; i < 5; i++) {
        cur61 = x25 - y37;
        x25 = cur61;
        y37 = y37 - 4;
        cur61 = cur61 + 4;
        y37 = y37 + 2;
        y37 = y37 - x25;
        x25 = x25 + 5;
        y37 = y37 + x25;
        cur61 = cur61 + y37;
        cur61 = x25;
        if (cur61 <= -36) {
        y37 = x25;
        }
    }
}
int main() { test_func(); return 0; }

