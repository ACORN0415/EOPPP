int test_func(void) {
    int v0 = 61;
    int v1 = 64;
    int v2 = 58;
    int v3 = 4;
    int v4 = 98;
    int i;
    v3 = v3 + v2;
    v4 = v4 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
