// RTPG_5799: vars=6 stmts=7
struct Pair { int a; int b; };
void test_func(void) {
    int x68 = 5;
    int dat15 = 7;
    int z4 = 7;
    int lo35 = 9;
    int c43 = 8;
    int x9 = 18028;
    struct Pair s; s.a = 20; s.b = 4;
    int i;
    for (i = 0; i < 70; i++) {
        switch (x68) {
            case 0: x68 = 6; break;
            case 1: dat15 = 52; break;
            case 2: lo35 = 6; break;
            default: break;
        }
        x68 = x68 + 1;
    }
}
int main() { test_func(); return 0; }

