// RTPG_6853: vars=7 stmts=12
int xn[32];
int yo[32];
struct Node { int a; int b; };
void test_func(void) {
    int val49 = -12;
    int acc65 = -24;
    int cnt11 = 10;
    int cnt54 = 7;
    int acc33 = 5;
    int a47 = 88;
    int res94 = 12979;
    struct Node s; s.a = 8635; s.b = 6;
    int i;
    for (i = 0; i < 32; i++) {
        res94 = xn[i];
        acc33 = acc65 + a47;
        acc33 = val49 - cnt11;
        val49 = res94 - val49;
        cnt11 = cnt54 - 88;
        val49 = acc65;
        a47 = res94 / val49;
        val49 = val49 - a47;
        cnt11 = cnt11 - 1;
        acc65 = cnt11 ^ acc33;
        res94 = val49 - cnt11;
        cnt11 = acc65;
        val49 = res94 + acc33;
        s.a = s.a + s.b;
        if (res94 < -18) {
        a47 = a47 + 1;
        }
        yo[i] = val49;
    }
}
int main() { test_func(); return 0; }

