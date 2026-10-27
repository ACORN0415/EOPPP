// RTPG_9109: vars=6 stmts=5
struct Point { int a; int b; };
void test_func(void) {
    int prev51 = -48;
    int c77 = 53;
    int cur63 = 3;
    int acc68 = -23;
    int res6 = 8845;
    int x5 = 25029;
    struct Point s; s.a = 4; s.b = 81;
    int i;
    for (i = 0; i < 44; i++) {
        c77 = cur63;
        prev51 = c77;
        cur63 = cur63 + 1;
        cur63 = cur63 + 2;
        c77 = res6;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

