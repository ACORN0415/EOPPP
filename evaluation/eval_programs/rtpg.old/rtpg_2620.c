// RTPG_2620: vars=4 stmts=5
enum State { BLUE, GREEN, SLOW };
void test_func(void) {
    int x47 = 67;
    int b48 = 35;
    int sum57 = 15958;
    int hi75 = 28;
    enum State st = BLUE;
    int *ptr = &b48;
    int i;
    for (i = 0; i < 16; i++) {
        hi75 = sum57 | sum57;
        sum57 = hi75 % sum57;
        hi75 = b48 | b48;
        x47 = b48 - sum57;
        sum57 = sum57 + 3;
        *ptr = *ptr + 2;
        if (b48 > 46) {
        b48 = sum57 + 0;
        }
    }
}
int main() { test_func(); return 0; }

