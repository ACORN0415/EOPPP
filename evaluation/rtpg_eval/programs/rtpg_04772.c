int test_func(void) {
    int v0 = 43;
    int v1 = 3;
    int v2 = 87;
    int v3 = 37;
    int v4 = 0;
    int v5 = 86;
    int i;
    if (v2 > v5) { v2 = v5; }
    v4 = v4 - v2;
    v4 = 91;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
