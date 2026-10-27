// RTPG_9189: vars=5 stmts=5
int xn[16];
int yo[16];
struct Node { int a; int b; };
void test_func(void) {
    int res85 = 41368;
    int a92 = 18620;
    int v38 = 22;
    int acc9 = 96;
    int sum12 = 24284;
    struct Node s; s.a = 14; s.b = 74;
    int h0 = 86;
    int sv0 = 0;
    int h1 = 40763;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res85 = xn[i];
        v38 = v38 * 58;
        v38 = a92 - sum12;
        sum12 = sum12 + v38;
        a92 = v38 - a92;
        a92 = acc9 * 6;
        s.a = s.a + s.b;
        yo[i] = acc9;
    }
}
int main() { test_func(); return 0; }

