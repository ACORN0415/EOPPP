int test_func(void) {
    int v0 = 65;
    int v1 = 38;
    int v2 = 43;
    int i;
    if (v1 > v2) { v1 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
