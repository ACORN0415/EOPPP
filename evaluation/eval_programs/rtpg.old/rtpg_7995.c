// RTPG_7995: vars=4 stmts=3
struct Pair { int a; int b; };
void test_func(void) {
    int sum53 = 43;
    int hi46 = 6;
    int lo32 = -25;
    int acc10 = 2;
    struct Pair s; s.a = 58; s.b = 4;
    int i;
    for (i = 0; i < 5; i++) {
        acc10 = hi46 + acc10;
        hi46 = sum53 - sum53;
        acc10 = acc10;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

