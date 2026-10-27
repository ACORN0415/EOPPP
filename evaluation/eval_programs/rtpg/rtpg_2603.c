// RTPG_2603: vars=4 stmts=2
int xn[64];
int yo[64];
struct Data { int a; int b; };
enum State { GREEN, FAST, OFF };
void test_func(void) {
    int cnt46 = 60;
    int lo41 = 61;
    int b99 = 15;
    int z4 = 8;
    struct Data s; s.a = 2; s.b = 2;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 64; i++) {
        b99 = xn[i];
        lo41 = z4;
        z4 = b99 + z4;
        s.a = s.a + s.b;
        yo[i] = b99;
    }
}
int main() { test_func(); return 0; }

