int test_func(void) {
    int v0 = 66;
    int v1 = 76;
    int v2 = 82;
    int i;
    if (v0 > v0) { v0 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
