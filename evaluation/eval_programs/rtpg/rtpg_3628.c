// RTPG_3628: vars=4 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int lo22 = 7;
    int b69 = 14340;
    int prev13 = 4;
    int lo32 = -15;
    struct Data s; s.a = 13234; s.b = 25264;
    int i;
    for (i = 0; i < 69; i++) {
        switch (lo22) {
            case 0: prev13 = -19; break;
            case 1: lo32 = 10; break;
            case 2: lo32 = 7; break;
            default: break;
        }
        lo22 = lo22 + 1;
    }
}
int main() { test_func(); return 0; }

