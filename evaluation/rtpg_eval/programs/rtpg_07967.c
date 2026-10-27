int test_func(void) {
    int v0 = 19;
    int v1 = 58;
    int v2 = 31;
    int v3 = 68;
    int v4 = 27;
    int v5 = 1;
    int i;
    if (v1 > v1) { v1 = v1; }
    v2 = v2 * 5;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
