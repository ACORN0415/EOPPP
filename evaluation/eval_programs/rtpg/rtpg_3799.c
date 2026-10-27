// RTPG_3799: vars=7 stmts=4
enum State { BLUE, OFF, ON };
void test_func(void) {
    int x90 = 4717;
    int dat40 = 96;
    int cnt8 = 5;
    int out63 = 10709;
    float z96 = 93.74;
    int v71 = 40;
    double x21 = 20.85;
    enum State st = BLUE;
    int *ptr = &z96;
    int i;
    for (i = 0; i < 80; i++) {
        v71 = cnt8;
        v71 = out63 ^ x90;
        z96 = x90 / dat40;
        v71 = v71 & x90;
        *ptr = *ptr + 1;
        if (x90 > 99) {
        z96 = z96 - 1;
        }
    }
}
int main() { test_func(); return 0; }

