// RTPG_9811: vars=7 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int b0 = 5331;
    int cur56 = 25;
    int prev44 = 43;
    int acc54 = 12;
    int c32 = 85;
    int x42 = -45;
    int y3 = -29;
    struct Data s; s.a = 4; s.b = 57;
    int i;
    for (i = 0; i < 12; i++) {
        cur56 = cur56 + b0;
        acc54 = c32 - 66;
        x42 = y3 - cur56;
        acc54 = b0 - 14391;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

