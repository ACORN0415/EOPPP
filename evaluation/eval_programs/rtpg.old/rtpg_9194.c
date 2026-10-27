// RTPG_9194: vars=5 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    float c86 = 29.23;
    int hi65 = -34;
    int y40 = 25358;
    int v93 = 83;
    int a68 = 2;
    struct Data s; s.a = 10; s.b = 4;
    int i;
    for (i = 0; i < 21; i++) {
        v93 = y40;
        y40 = c86;
        s.a = s.a + s.b;
        if (v93 < -47) {
        a68 = c86;
        }
    }
}
int main() { test_func(); return 0; }

