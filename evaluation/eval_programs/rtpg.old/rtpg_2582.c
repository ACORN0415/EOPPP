// RTPG_2582: vars=6 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int c24 = 7;
    int acc91 = 43;
    int sum28 = 0;
    int acc22 = 7;
    int tmp57 = 15;
    int res51 = 39;
    struct Data s; s.a = 5; s.b = 9;
    int i;
    for (i = 0; i < 37; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        acc22 = acc22 + sum28;
        sum28 = acc22 - acc91;
        res51 = tmp57 + sum28;
        sum28 = sum28;
        sum28 = sum28 - 4;
        }
    }
}
int main() { test_func(); return 0; }

