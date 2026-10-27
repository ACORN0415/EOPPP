int test_func(void) {
    int v0 = 93;
    int v1 = 64;
    int v2 = 73;
    int v3 = 98;
    int i;
    v2 = v2 - v0;
    if (v3 > v2) { v3 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v1 = v1 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
