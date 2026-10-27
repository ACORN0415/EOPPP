// RTPG_7826: vars=3 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int prev62 = 71;
    int cnt79 = 38818;
    int tmp14 = 4;
    struct Data s; s.a = 8; s.b = 7;
    int i;
    for (i = 0; i < 75; i++) {
        tmp14 = tmp14 - 2;
        cnt79 = cnt79 + tmp14;
        tmp14 = tmp14 + 5;
        prev62 = tmp14;
        prev62 = tmp14 + tmp14;
        s.a = s.a + s.b;
        if (prev62 < -2) {
        tmp14 = tmp14 - prev62;
        }
    }
}
int main() { test_func(); return 0; }

