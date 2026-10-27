// RTPG_662: vars=3 stmts=5
struct Point { int a; int b; };
void test_func(void) {
    int sum52 = 8;
    int lo36 = -10;
    int x75 = 43;
    struct Point s; s.a = 10; s.b = 9;
    int i;
    for (i = 0; i < 28; i++) {
        sum52 = lo36 - 443;
        x75 = x75 + 74;
        sum52 = lo36 - sum52;
        x75 = sum52 - 75;
        lo36 = x75;
        s.a = s.a + s.b;
        if (lo36 > 17020) goto done;
    }
done:
    lo36 = 0;
}
int main() { test_func(); return 0; }

