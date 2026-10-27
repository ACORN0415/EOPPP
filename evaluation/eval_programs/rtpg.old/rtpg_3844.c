// RTPG_3844: vars=7 stmts=6
void test_func(void) {
    int cur6 = 9;
    int out58 = 0;
    int val50 = 36378;
    int z28 = 63132;
    int cur94 = 9;
    int a39 = 13292;
    int b34 = 42101;
    int *ptr = &val50;
    int i;
    for (i = 0; i < 43; i++) {
        z28 = z28 - 1;
        val50 = b34;
        cur94 = z28 + 15;
        cur6 = cur6;
        b34 = cur94 - cur6;
        cur94 = a39 + cur6;
        *ptr = *ptr + 2;
        if (z28 >= 63) {
        z28 = z28 - 2;
        }
    }
}
int main() { test_func(); return 0; }

