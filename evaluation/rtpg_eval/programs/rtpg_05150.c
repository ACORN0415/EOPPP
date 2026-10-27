int test_func(void) {
    int v0 = 31;
    int v1 = 83;
    int v2 = 2;
    int v3 = 51;
    int v4 = 63;
    int v5 = 74;
    int v6 = 62;
    int i;
    v5 = v5 * 5;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
