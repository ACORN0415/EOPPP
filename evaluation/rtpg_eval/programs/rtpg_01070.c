int test_func(void) {
    int v0 = 96;
    int v1 = 81;
    int v2 = 95;
    int v3 = 94;
    int v4 = 46;
    int v5 = 33;
    int v6 = 37;
    int i;
    if (v2 > v4) { v2 = v4; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
