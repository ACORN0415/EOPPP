// RTPG_8925: vars=4 stmts=5
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int a46 = 76;
    int val52 = 22985;
    int prev38 = 54864;
    int cur55 = 9;
    struct Point s; s.a = 97; s.b = 6;
    int i;
    for (i = 0; i < 11; i++) {
        switch (val52) {
            case 0: val52 = 7; break;
            case 1: a46 = 1; break;
            case 2: cur55 = 7; break;
            default: break;
        }
        val52 = val52 + 1;
    }
}
int main() { test_func(); return 0; }

