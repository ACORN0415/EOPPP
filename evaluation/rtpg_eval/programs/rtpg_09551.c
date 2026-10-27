int test_func(void) {
    int v0 = 21;
    int v1 = 67;
    int v2 = 18;
    int v3 = 41;
    int v4 = 79;
    int i;
    v2 = 30;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
