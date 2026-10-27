// RTPG_5549: vars=4 stmts=3
int xn[64];
int yo[64];
struct Point { int a; int b; };
enum State { FAST, ON, OFF };
void test_func(void) {
    int v52 = 82;
    int z23 = 52947;
    int z51 = 21;
    int acc95 = 10;
    struct Point s; s.a = 6; s.b = 23288;
    enum State st = FAST;
    int i;
    for (i = 0; i < 72; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        v52 = z51 + z23;
        v52 = acc95;
        z23 = z23 + 5;
        }
    }
}
int main() { test_func(); return 0; }

