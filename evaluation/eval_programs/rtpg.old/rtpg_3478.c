// RTPG_3478: vars=10 stmts=11
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int a56 = 10;
    int lo94 = 31;
    int prev6 = 17;
    int v16 = 11;
    int out95 = 40928;
    int out57 = 13;
    int c12 = 9028;
    int lo24 = -16;
    int acc39 = 45;
    int acc7 = -16;
    struct Data s; s.a = -8; s.b = 5;
    int i;
    for (i = 0; i < 17; i++) {
        switch (lo94) {
            case 0: v16 = 75; break;
            case 1: out57 = 3; break;
            case 2: out57 = 84; break;
            default: break;
        }
        lo94 = lo94 + 1;
    }
}
int main() { test_func(); return 0; }

