// RTPG_5244: vars=8 stmts=5
enum State { GREEN, OFF, SLOW };
void test_func(void) {
    int a63 = 24482;
    int c33 = 16367;
    int val67 = 10;
    int v27 = 9543;
    int y35 = 60;
    int x18 = 24454;
    int a76 = 19;
    int tmp41 = 6;
    enum State st = GREEN;
    int *ptr = &y35;
    int i;
    for (i = 0; i < 80; i++) {
        c33 = y35;
        val67 = val67 - 2;
        tmp41 = x18;
        c33 = y35 + a76;
        tmp41 = y35 - tmp41;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

