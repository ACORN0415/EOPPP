// RTPG_4101: vars=8 stmts=4
struct Node { int a; int b; };
void test_func(void) {
    int prev8 = 2;
    int out7 = 40012;
    int acc46 = -3;
    int out56 = 60;
    int cnt97 = 10;
    int sum60 = 15749;
    int cur43 = 3;
    int res35 = 35281;
    struct Node s; s.a = 0; s.b = 13143;
    int i;
    for (i = 0; i < 7; i++) {
        cur43 = cur43 + 3;
        prev8 = res35 - cnt97;
        sum60 = cur43 - res35;
        cnt97 = prev8;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

