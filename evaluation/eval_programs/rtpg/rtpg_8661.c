// RTPG_8661: vars=4 stmts=5
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int v42 = 65;
    int acc12 = 43;
    int cur37 = 9;
    int cur81 = 12060;
    struct Point s; s.a = 54; s.b = 27480;
    int i;
    for (i = 0; i < 38; i++) {
        switch (cur81) {
            case 0: cur81 = 3; break;
            case 1: cur81 = 16; break;
            case 2: cur37 = 94; break;
            case 3: cur81 = 5; break;
            default: break;
        }
        cur81 = cur81 + 1;
    }
}
int main() { test_func(); return 0; }

