int test_func(void) {
    int v0 = 29;
    int v1 = 8;
    int v2 = 78;
    int v3 = 78;
    int v4 = 61;
    int v5 = 1;
    int v6 = 18;
    int i;
    v1 = v1 * 7;
    v4 = v4 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
