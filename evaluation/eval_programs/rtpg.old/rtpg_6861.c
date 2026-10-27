// RTPG_6861: vars=5 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int y60 = 53738;
    int x91 = 2;
    int hi33 = 3;
    int y44 = 3;
    int dat67 = 7;
    struct Node s; s.a = 1; s.b = 8;
    int i;
    for (i = 0; i < 76; i++) {
        switch (hi33) {
            case 0: hi33 = 32; break;
            case 1: hi33 = 3; break;
            case 2: y60 = 55; break;
            default: break;
        }
        hi33 = hi33 + 1;
    }
}
int main() { test_func(); return 0; }

