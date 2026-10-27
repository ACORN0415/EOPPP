// RTPG_7758: vars=8 stmts=2
struct Pair { int a; int b; };
void test_func(void) {
    int dat42 = 13493;
    int val40 = 14;
    int a89 = 16;
    int y63 = -42;
    int out90 = 13;
    int c4 = 88;
    int c36 = 58;
    int tmp87 = 24;
    struct Pair s; s.a = 70; s.b = 23;
    int i;
    for (i = 0; i < 23; i++) {
        switch (y63) {
            case 0: y63 = 48; break;
            case 1: dat42 = 84; break;
            default: break;
        }
        y63 = y63 + 1;
    }
}
int main() { test_func(); return 0; }

