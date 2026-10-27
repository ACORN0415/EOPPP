// RTPG_6937: vars=5 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int dat67 = 53738;
    int x91 = 2;
    int y60 = 3;
    int y44 = 3;
    int hi33 = 7;
    struct Node s; s.a = 1; s.b = 8;
    int i;
    for (i = 0; i < 76; i++) {
        switch (y60) {
            case 0: y60 = 32; break;
            case 1: y60 = 3; break;
            case 2: dat67 = 55; break;
            default: break;
        }
        y60 = y60 + 1;
    }
}
int main() { test_func(); return 0; }

