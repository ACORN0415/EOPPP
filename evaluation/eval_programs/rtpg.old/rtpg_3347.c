// RTPG_3347: vars=5 stmts=5
enum State { GREEN, OFF, ON };
void test_func(void) {
    int sum2 = 38040;
    int val94 = 8;
    int val72 = 83;
    int cur3 = 69;
    int prev22 = 10;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 98; i++) {
        cur3 = prev22 + sum2;
        val72 = val94 + 100;
        cur3 = sum2 - val72;
        prev22 = cur3;
        sum2 = prev22 - 43178;
    }
}
int main() { test_func(); return 0; }

