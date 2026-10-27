// RTPG_1663: vars=6 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int tmp62 = 3;
    int a38 = 24;
    int b63 = 26;
    int z50 = 24;
    int res5 = 4;
    int val96 = 7;
    struct Node s; s.a = 5; s.b = 21;
    int h0 = 97;
    int sv0 = 0;
    int h1 = 55798;
    int sv1 = 0;
    int i;
    for (i = 0; i < 98; i++) {
        b63 = a38 * 28;
        a38 = b63;
        tmp62 = tmp62 + 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

