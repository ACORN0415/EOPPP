int test_func(void) {
    int v0 = 89;
    int v1 = 50;
    int v2 = 19;
    int v3 = 30;
    int v4 = 68;
    int v5 = 2;
    int v6 = 100;
    int i;
    v0 = v0 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
