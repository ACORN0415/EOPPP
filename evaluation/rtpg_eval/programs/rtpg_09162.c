int __arr_9162[10];
int test_func(void) {
    int v0 = 45;
    int v1 = 94;
    int v2 = 27;
    int i;
    for (i = 0; i < 10; i++) { __arr_9162[i] = v1 + i; }
    v1 = v1 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
