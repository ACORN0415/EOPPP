// RTPG_1268: vars=4 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int hi85 = 29;
    int acc64 = 11;
    int dat34 = 8;
    int z57 = 74;
    struct Point s; s.a = -16; s.b = -49;
    int *ptr = &z57;
    int i;
    for (i = 0; i < 49; i++) {
        hi85 = hi85 | dat34;
        dat34 = acc64 + hi85;
        z57 = acc64 - dat34;
        hi85 = hi85 - 3;
        dat34 = hi85 - 62539;
        dat34 = dat34 + 22827;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        if (z57 == 5) {
        hi85 = z57;
        }
    }
}
int main() { test_func(); return 0; }

