int test_func(void) {
    int v0 = 54;
    int v1 = 76;
    int v2 = 12;
    int v3 = 34;
    int i;
    v0 = v0 - v1;
    v1 = 27;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
