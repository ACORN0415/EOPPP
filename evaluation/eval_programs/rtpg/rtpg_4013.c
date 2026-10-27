// RTPG_4013: vars=3 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int dat92 = 27;
    int val64 = 80;
    int res89 = 10;
    struct Point s; s.a = 11401; s.b = 11297;
    int i;
    for (i = 0; i < 71; i++) {
        switch (dat92) {
            case 0: dat92 = 9; break;
            case 1: dat92 = 28575; break;
            case 2: res89 = 80; break;
            case 3: dat92 = 75; break;
            default: break;
        }
        dat92 = dat92 + 1;
    }
}
int main() { test_func(); return 0; }

