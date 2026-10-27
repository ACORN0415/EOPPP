int test_func(void) {
    int v0 = 82;
    int v1 = 20;
    int v2 = 4;
    int v3 = 72;
    int v4 = 48;
    int i;
    if (v3 > v0) { v3 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
