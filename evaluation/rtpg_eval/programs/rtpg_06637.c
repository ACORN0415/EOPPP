int test_func(void) {
    int v0 = 23;
    int v1 = 58;
    int v2 = 47;
    int v3 = 34;
    int i;
    v3 = v3 - v2;
    int *__p = &v1;
    *__p = *__p + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
