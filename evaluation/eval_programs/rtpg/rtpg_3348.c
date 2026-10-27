// RTPG_3348: vars=8 stmts=11
struct Node { int a; int b; };
void test_func(void) {
    int b81 = 1;
    int val77 = 58603;
    int out26 = 3;
    int y1 = 23531;
    int cur10 = 0;
    int tmp52 = 94;
    int out20 = 40;
    int out90 = 24;
    struct Node s; s.a = 3; s.b = 36;
    int i;
    for (i = 0; i < 38; i++) {
        switch (y1) {
            case 0: tmp52 = 57; break;
            case 1: out90 = 60; break;
            case 2: out26 = 40860; break;
            default: break;
        }
        y1 = y1 + 1;
    }
}
int main() { test_func(); return 0; }

