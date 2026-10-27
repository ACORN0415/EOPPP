int __arr_9469[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 78;
    int v2 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_9469[i] = v1 + i; }
    v2 = 28;
    if (v1 > v0) { v1 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
