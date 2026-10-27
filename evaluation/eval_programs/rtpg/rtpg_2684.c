// RTPG_2684: vars=9 stmts=6
struct Data { int a; int b; };
void test_func(void) {
    int c2 = 4;
    int prev14 = 46270;
    int hi7 = 5;
    int z40 = 93;
    int v18 = -30;
    int res57 = 19987;
    int dat84 = 14;
    int tmp27 = 2;
    int hi35 = 7;
    struct Data s; s.a = 9; s.b = 34;
    int i;
    for (i = 0; i < 16; i++) {
        switch (z40) {
            case 0: hi35 = 16; break;
            case 1: c2 = 37656; break;
            case 2: prev14 = 27; break;
            default: break;
        }
        z40 = z40 + 1;
    }
}
int main() { test_func(); return 0; }

