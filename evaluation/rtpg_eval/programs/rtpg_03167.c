int test_func(void) {
    int v0 = 46;
    int v1 = 37;
    int v2 = 26;
    int i;
    v0 = 70;
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
