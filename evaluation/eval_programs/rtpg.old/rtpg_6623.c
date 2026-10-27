// RTPG_6623: vars=4 stmts=10
void test_func(void) {
    int lo83 = 20;
    int c74 = -29;
    int z23 = 1;
    int lo13 = 4;
    int *ptr = &c74;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        lo83 = z23 * -47;
        lo83 = c74 | lo13;
        c74 = lo83;
        c74 = lo83 - 23279;
        lo13 = lo83;
        c74 = lo13 - z23;
        z23 = lo83 + lo13;
        c74 = c74 - 3;
        lo13 = lo83 * 87;
        lo83 = z23 * 2;
        *ptr = *ptr + 2;
    }
done:
    lo83 = 0;
}
int main() { test_func(); return 0; }

