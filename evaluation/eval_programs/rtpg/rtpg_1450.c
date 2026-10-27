// RTPG_1450: vars=5 stmts=3
enum State { OFF, SLOW, BLUE };
void test_func(void) {
    int prev69 = 10;
    int val71 = 51;
    int out74 = -26;
    int v94 = 3;
    double acc37 = 2.37;
    enum State st = OFF;
    int *ptr = &prev69;
    int i;
    for (i = 0; i < 80; i++) {
        acc37 = val71 + 99;
        val71 = acc37 + 27;
        v94 = prev69;
        *ptr = *ptr + 5;
        if (prev69 < 40) {
        prev69 = prev69 + 1;
        }
    }
}
int main() { test_func(); return 0; }

