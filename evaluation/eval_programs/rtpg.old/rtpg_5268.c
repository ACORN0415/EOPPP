// RTPG_5268: vars=3 stmts=7
void test_func(void) {
    int x22 = 8;
    int x81 = 6;
    int cnt58 = 12;
    int h0 = 5;
    int sv0 = 0;
    int h1 = -26;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        x81 = x22 * 29;
        x22 = cnt58 - x81;
        x22 = x22;
        cnt58 = cnt58 + x22;
        x22 = x81;
        x22 = x22 * 56;
        x22 = x22 - 2;
    }
}
int main() { test_func(); return 0; }

