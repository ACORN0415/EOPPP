// RTPG_688: vars=3 stmts=9
void test_func(void) {
    int acc22 = -15;
    int prev24 = 58360;
    int cur76 = 6;
    int i;
    for (i = 0; i < 47; i++) {
        switch (acc22) {
            case 0: prev24 = 41717; break;
            case 1: prev24 = -26; break;
            default: break;
        }
        acc22 = acc22 + 1;
    }
}
int main() { test_func(); return 0; }

