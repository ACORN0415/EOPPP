int test_func(void) {
    int v0 = 71;
    int v1 = 29;
    int v2 = 27;
    int v3 = 5;
    int v4 = 17;
    int v5 = 48;
    int v6 = 83;
    int v7 = 25;
    int i;
    if (v5 > v2) { v5 = v2; }
    v5 = v5 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
