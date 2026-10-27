// RTPG_4031: vars=4 stmts=9
struct Node { int a; int b; };
void test_func(void) {
    int val17 = 68;
    int val34 = 52;
    int cur9 = 44;
    int sum55 = -35;
    struct Node s; s.a = -50; s.b = 63;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 63; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        val17 = sum55 + val17;
        val17 = val17 + 5;
        sum55 = val34 + 15684;
        cur9 = sum55;
        val17 = val17 - 5;
        cur9 = sum55;
        cur9 = val17 + cur9;
        val17 = val17 + 1;
        sum55 = sum55 + 37;
        }
    }
}
int main() { test_func(); return 0; }

