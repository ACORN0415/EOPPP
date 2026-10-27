// RTPG_2449: vars=8 stmts=7
struct Node { int a; int b; };
void test_func(void) {
    int b24 = 10816;
    int cur85 = 6;
    int res92 = 50318;
    int res11 = 25;
    int v93 = 5;
    int lo63 = 36970;
    int v97 = -28;
    int y20 = 56;
    struct Node s; s.a = 3; s.b = 29;
    int i;
    for (i = 0; i < 96; i++) {
        b24 = v97;
        lo63 = lo63 + 5;
        b24 = v97 + lo63;
        b24 = v97;
        cur85 = b24;
        res11 = cur85 + 7;
        v97 = v97 + 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

