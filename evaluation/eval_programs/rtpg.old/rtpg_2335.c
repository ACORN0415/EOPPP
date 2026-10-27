// RTPG_2335: vars=4 stmts=3
struct Point { int a; int b; };
void test_func(void) {
    int c31 = 7;
    int out78 = 99;
    int val20 = 26642;
    int lo77 = 78;
    struct Point s; s.a = 28; s.b = 20472;
    int h0 = 26;
    int sv0 = 0;
    int h1 = 57607;
    int sv1 = 0;
    int i;
    for (i = 0; i < 69; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        c31 = out78;
        val20 = out78;
        out78 = c31 + 3;
        }
    }
done:
    c31 = 0;
}
int main() { test_func(); return 0; }

