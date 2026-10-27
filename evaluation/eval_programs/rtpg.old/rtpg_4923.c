// RTPG_4923: vars=10 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int dat80 = 8946;
    int a66 = 75;
    int tmp40 = 4;
    int prev3 = 3;
    int b80 = 6;
    int hi18 = 43;
    int prev48 = 8;
    int cur63 = -20;
    int lo66 = 63;
    int out99 = 6;
    struct Data s; s.a = 23; s.b = 77;
    int i;
    for (i = 0; i < 45; i++) {
        out99 = hi18;
        dat80 = cur63 - lo66;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

