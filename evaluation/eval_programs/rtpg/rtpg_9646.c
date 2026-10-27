// RTPG_9646: vars=4 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int val1 = -32;
    int val6 = 41;
    int b87 = 1;
    int acc33 = 10;
    struct Data s; s.a = 40343; s.b = 61849;
    int i;
    for (i = 0; i < 44; i++) {
        switch (b87) {
            case 0: val6 = 53335; break;
            case 1: val1 = 35; break;
            default: break;
        }
        b87 = b87 + 1;
    }
}
int main() { test_func(); return 0; }

