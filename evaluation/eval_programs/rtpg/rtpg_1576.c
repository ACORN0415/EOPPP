// RTPG_1576: vars=6 stmts=8
struct Point { int a; int b; };
void test_func(void) {
    int val76 = 25;
    int cur63 = 0;
    int c66 = 30980;
    int z73 = 5;
    int cur49 = 43;
    int z61 = 46;
    struct Point s; s.a = 0; s.b = 3;
    int i;
    for (i = 0; i < 12; i++) {
        switch (cur63) {
            case 0: cur63 = 32; break;
            case 1: cur49 = 83; break;
            case 2: z73 = 39286; break;
            default: break;
        }
        cur63 = cur63 + 1;
    }
}
int main() { test_func(); return 0; }

