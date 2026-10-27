// RTPG_5630: vars=4 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int lo52 = 60622;
    int b91 = 14;
    int y78 = 37950;
    int cnt9 = 7;
    struct Data s; s.a = -33; s.b = 5;
    int i;
    for (i = 0; i < 48; i++) {
        cnt9 = cnt9 - 5;
        lo52 = cnt9 + 21721;
        y78 = cnt9 - lo52;
        lo52 = cnt9 - lo52;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

