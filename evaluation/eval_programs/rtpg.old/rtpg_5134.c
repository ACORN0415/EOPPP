// RTPG_5134: vars=3 stmts=3
void test_func(void) {
    int cur0 = 3;
    int res68 = 12;
    int lo47 = -44;
    int i;
    for (i = 0; i < 36; i++) {
        res68 = lo47 + 11;
        cur0 = cur0 - res68;
        res68 = lo47 + res68;
        if (res68 <= 36) {
        lo47 = cur0 - res68;
        }
    }
}
int main() { test_func(); return 0; }

