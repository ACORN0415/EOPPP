int test_func(void) {
    int v0 = 15;
    int v1 = 67;
    int v2 = 40;
    int i;
    if (v1 > v1) { v1 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
