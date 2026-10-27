int test_func(void) {
    int v0 = 76;
    int v1 = 35;
    int v2 = 30;
    int i;
    v2 = v2 + v1;
    if (v1 > v0) { v1 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
