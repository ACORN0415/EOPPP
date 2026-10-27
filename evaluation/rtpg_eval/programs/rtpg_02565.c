int test_func(void) {
    int v0 = 64;
    int v1 = 99;
    int v2 = 9;
    int v3 = 81;
    int i;
    v0 = 65;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
