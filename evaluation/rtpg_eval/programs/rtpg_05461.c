int test_func(void) {
    int v0 = 46;
    int v1 = 56;
    int v2 = 87;
    int v3 = 21;
    int v4 = 4;
    int v5 = 39;
    int i;
    v1 = 88;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
