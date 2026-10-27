int test_func(void) {
    int v0 = 7;
    int v1 = 27;
    int v2 = 92;
    int i;
    v0 = v0 - v2;
    int *__p = &v0;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
