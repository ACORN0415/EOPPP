// RTPG_3481: vars=6 stmts=2
int xn[64];
int yo[64];
enum State { GREEN, BLUE, FAST };
void test_func(void) {
    int b93 = 4;
    int val88 = 53490;
    int v21 = 65062;
    int x47 = 83;
    int cnt8 = 22942;
    int cnt56 = 53505;
    enum State st = GREEN;
    int *ptr = &val88;
    int h0 = 34330;
    int sv0 = 0;
    int h1 = 49;
    int sv1 = 0;
    int h2 = 46540;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        val88 = xn[i];
        v21 = v21 + 1;
        cnt56 = cnt56 * -48;
        *ptr = *ptr + 5;
        yo[i] = cnt8;
    }
}
int main() { test_func(); return 0; }

