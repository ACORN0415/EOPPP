// RTPG_4985: vars=10 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int out99 = 8946;
    int b80 = 75;
    int dat80 = 4;
    int cur63 = 3;
    int lo66 = 6;
    int hi18 = 43;
    int prev48 = 8;
    int prev3 = -20;
    int tmp40 = 63;
    int a66 = 6;
    struct Data s; s.a = 23; s.b = 77;
    int i;
    for (i = 0; i < 45; i++) {
        a66 = hi18;
        out99 = prev3 - tmp40;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

