// RTPG_3025: vars=3 stmts=11
struct Node { int a; int b; };
void test_func(void) {
    int a11 = 5;
    int z26 = 7;
    int sum7 = -28;
    struct Node s; s.a = 32; s.b = 29866;
    int i;
    for (i = 0; i < 8; i++) {
        switch (a11) {
            case 0: a11 = 21381; break;
            case 1: sum7 = -17; break;
            case 2: sum7 = 19; break;
            default: break;
        }
        a11 = a11 + 1;
    }
}
int main() { test_func(); return 0; }

