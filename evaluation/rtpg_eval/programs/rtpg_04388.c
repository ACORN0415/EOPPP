int test_func(void) {
    int v0 = 80;
    int v1 = 7;
    int v2 = 15;
    int v3 = 19;
    int v4 = 19;
    int v5 = 13;
    int i;
    v2 = 14;
    v5 = v5 * 6;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
