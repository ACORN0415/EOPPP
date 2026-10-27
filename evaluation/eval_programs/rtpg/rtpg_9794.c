// RTPG_9794: vars=3 stmts=7
struct Node { int a; int b; };
void test_func(void) {
    int res97 = 57;
    int b36 = 54667;
    int acc26 = -22;
    struct Node s; s.a = 1; s.b = -40;
    int i;
    for (i = 0; i < 58; i++) {
        res97 = res97 - acc26;
        b36 = res97 - res97;
        acc26 = res97 + b36;
        b36 = b36 - res97;
        acc26 = acc26 + 2;
        b36 = res97 + acc26;
        acc26 = acc26 - 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

