int test_func(void) {
    int v0 = 40;
    int v1 = 45;
    int v2 = 19;
    int i;
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
