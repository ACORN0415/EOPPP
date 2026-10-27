// RTPG_4487: vars=4 stmts=3
struct Data { int a; int b; };
void test_func(void) {
    int cnt25 = 6708;
    double a8 = 19.38;
    int val64 = -10;
    int out6 = 63;
    struct Data s; s.a = 89; s.b = -44;
    int i;
    for (i = 0; i < 69; i++) {
        cnt25 = out6;
        cnt25 = cnt25;
        out6 = cnt25 + 23681;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

