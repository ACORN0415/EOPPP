int test_func(void) {
    int v0 = 76;
    int v1 = 24;
    int v2 = 35;
    int v3 = 24;
    int v4 = 82;
    int v5 = 30;
    int i;
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
