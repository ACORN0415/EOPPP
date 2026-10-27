// RTPG_4528: vars=7 stmts=5
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int prev35 = 1;
    int out87 = 49;
    int c27 = 44890;
    int x29 = 47;
    int x66 = 70;
    int prev90 = 62234;
    int cnt6 = 91;
    struct Point s; s.a = 8; s.b = 65;
    int i;
    for (i = 0; i < 34; i++) {
        switch (prev90) {
            case 0: x29 = 0; break;
            case 1: x29 = 411; break;
            case 2: out87 = 3; break;
            case 3: x66 = 2; break;
            default: break;
        }
        prev90 = prev90 + 1;
    }
}
int main() { test_func(); return 0; }

