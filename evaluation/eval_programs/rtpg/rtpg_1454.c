// RTPG_1454: vars=6 stmts=5
struct Pair { int a; int b; };
void test_func(void) {
    int dat29 = 3;
    int c34 = 1;
    int cur25 = 27;
    int acc53 = 3;
    int a34 = 44318;
    int val25 = 31;
    struct Pair s; s.a = 35; s.b = 7;
    int i;
    for (i = 0; i < 11; i++) {
        switch (val25) {
            case 0: acc53 = 27; break;
            case 1: cur25 = 20; break;
            default: break;
        }
        val25 = val25 + 1;
    }
}
int main() { test_func(); return 0; }

