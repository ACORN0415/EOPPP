// RTPG_5162: vars=10 stmts=11
struct Point { int a; int b; };
void test_func(void) {
    int cur14 = 4;
    int prev57 = 2;
    int dat67 = 10;
    int acc3 = 47737;
    int z37 = 88;
    int b85 = 10;
    int dat66 = 43581;
    int v97 = 0;
    int x46 = 32268;
    int z15 = 18;
    struct Point s; s.a = 60; s.b = 3;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 48140;
    int sv1 = 0;
    int h2 = 24;
    int sv2 = 0;
    int h3 = 29;
    int sv3 = 0;
    int i;
    for (i = 0; i < 37; i++) {
        prev57 = prev57 * 22019;
        cur14 = b85 + z37;
        v97 = prev57 * 3;
        acc3 = z37 - 21174;
        z15 = z15 * 18;
        b85 = acc3 * 5;
        z37 = x46 - 15542;
        dat66 = v97 * 4;
        z37 = cur14 * 59;
        z15 = v97 - prev57;
        cur14 = dat67 - 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

