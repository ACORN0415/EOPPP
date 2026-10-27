int test_func(void) {
    int v0 = 42;
    int v1 = 78;
    int v2 = 36;
    int i;
    v1 = v1 - v0;
    v1 = 50;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
