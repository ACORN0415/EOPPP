// RTPG_1478: vars=8 stmts=5
enum State { ON, SLOW, OFF };
void test_func(void) {
    int x9 = -6;
    int c41 = 9;
    int v81 = 4;
    int z19 = 40;
    int sum45 = 21;
    int a98 = 76;
    int a96 = 35;
    int res44 = 69;
    enum State st = ON;
    int i;
    for (i = 0; i < 29; i++) {
        z19 = a98 + res44;
        res44 = sum45;
        res44 = z19 + 5;
        a98 = a98 + 2;
        a96 = a98 - res44;
        if (sum45 == 67) {
        res44 = sum45 - 5;
        }
    }
}
int main() { test_func(); return 0; }

