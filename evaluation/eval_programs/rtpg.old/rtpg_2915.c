// RTPG_2915: vars=3 stmts=12
struct Node { int a; int b; };
void test_func(void) {
    int c81 = 83;
    int cur9 = 10;
    int prev79 = 7;
    struct Node s; s.a = 37; s.b = -3;
    int h0 = 72;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 43; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        cur9 = prev79 - c81;
        cur9 = cur9 + 2;
        c81 = prev79;
        prev79 = cur9 - 6;
        c81 = c81 - prev79;
        c81 = c81 - prev79;
        c81 = prev79 + cur9;
        cur9 = cur9;
        prev79 = c81 + prev79;
        c81 = c81;
        cur9 = c81;
        cur9 = c81 + 2;
        }
    }
}
int main() { test_func(); return 0; }

