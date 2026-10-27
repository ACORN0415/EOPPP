int test_func(void) {
    int v0 = 24;
    int v1 = 1;
    int v2 = 51;
    int v3 = 30;
    int v4 = 20;
    int v5 = 80;
    int i;
    v4 = 49;
    for (i = 0; i < 10; i++) {
        v5 = v5 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
