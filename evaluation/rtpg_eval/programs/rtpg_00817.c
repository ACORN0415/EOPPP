int test_func(void) {
    int v0 = 85;
    int v1 = 21;
    int v2 = 54;
    int v3 = 16;
    int v4 = 97;
    int v5 = 99;
    int v6 = 71;
    int v7 = 20;
    int i;
    v5 = v5 - v1;
    v7 = 64;
    v5 = v5 * 8;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v0 = v0 | v6;
    return v0;
}
int main(void) { return test_func(); }
