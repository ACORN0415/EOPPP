// RTPG_2889: vars=10 stmts=7
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int z4 = 1;
    int y96 = 46096;
    int prev28 = 18511;
    int sum2 = 36;
    int lo77 = 4;
    int v42 = 65;
    int cur92 = 1;
    int cnt45 = 2;
    int cur89 = 77;
    int acc1 = 0;
    struct Data s; s.a = 4; s.b = 17763;
    int *ptr = &v42;
    int h0 = 89;
    int sv0 = 0;
    int h1 = -32;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo77 = xn[i];
        prev28 = cnt45 - cur92;
        prev28 = sum2 + cur89;
        z4 = y96 - v42;
        cur92 = sum2 * 31231;
        lo77 = cur92;
        y96 = cnt45 + prev28;
        lo77 = cur89 + v42;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        yo[i] = cnt45;
    }
}
int main() { test_func(); return 0; }

