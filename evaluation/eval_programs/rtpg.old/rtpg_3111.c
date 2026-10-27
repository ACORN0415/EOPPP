// RTPG_3111: vars=4 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int prev56 = 10;
    int val58 = 0;
    int dat62 = 16;
    int res0 = 85;
    struct Data s; s.a = 9; s.b = 13;
    int i;
    for (i = 0; i < 34; i++) {
        switch (res0) {
            case 0: prev56 = 5; break;
            case 1: prev56 = 19937; break;
            case 2: dat62 = 44; break;
            default: break;
        }
        res0 = res0 + 1;
    }
}
int main() { test_func(); return 0; }

