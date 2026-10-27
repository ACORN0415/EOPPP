// RTPG_2194: vars=4 stmts=5
struct Node { int a; int b; };
enum State { RED, OFF, BLUE };
void test_func(void) {
    int cur54 = 45837;
    int tmp52 = 4;
    int val85 = 9;
    int res11 = 78;
    struct Node s; s.a = 1; s.b = 33;
    enum State st = RED;
    int i;
    for (i = 0; i < 31; i++) {
        cur54 = cur54 - 5;
        val85 = val85 + res11;
        val85 = tmp52 + res11;
        cur54 = tmp52 + res11;
        tmp52 = val85;
        s.a = s.a + s.b;
        if (res11 > 34758) goto done;
        if (res11 < -37) {
        val85 = tmp52;
        }
    }
done:
    cur54 = 0;
}
int main() { test_func(); return 0; }

