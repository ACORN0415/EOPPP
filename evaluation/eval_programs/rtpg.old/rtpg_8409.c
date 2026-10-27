// RTPG_8409: vars=3 stmts=8
struct Node { int a; int b; };
void test_func(void) {
    int c28 = 21;
    int v97 = 65;
    int val77 = 88;
    struct Node s; s.a = 8; s.b = 35512;
    int *ptr = &val77;
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        v97 = v97 - val77;
        v97 = val77;
        val77 = c28 + v97;
        val77 = val77 + v97;
        val77 = val77 - 1;
        v97 = c28;
        val77 = val77 + 4;
        v97 = v97 + val77;
        }
    }
}
int main() { test_func(); return 0; }

