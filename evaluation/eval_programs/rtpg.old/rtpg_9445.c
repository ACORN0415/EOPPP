// RTPG_9445: vars=4 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int val1 = -32;
    int acc33 = 41;
    int val6 = 1;
    int b87 = 10;
    struct Data s; s.a = 40343; s.b = 61849;
    int i;
    for (i = 0; i < 44; i++) {
        switch (val6) {
            case 0: acc33 = 53335; break;
            case 1: val1 = 35; break;
            default: break;
        }
        val6 = val6 + 1;
    }
}
int main() { test_func(); return 0; }

