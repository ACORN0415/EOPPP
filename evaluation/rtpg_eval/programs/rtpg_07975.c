int test_func(void) {
    int v0 = 35;
    int v1 = 96;
    int v2 = 96;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
