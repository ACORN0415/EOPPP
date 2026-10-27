int test_func(void) {
    int v0 = 42;
    int v1 = 61;
    int v2 = 37;
    int v3 = 93;
    int v4 = 96;
    int v5 = 72;
    int v6 = 8;
    int v7 = 21;
    int i;
    v5 = v5 + v2;
    v5 = v5 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    return v0;
}
int main(void) { return test_func(); }
