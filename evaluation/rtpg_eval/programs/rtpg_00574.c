int __arr_574[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 98;
    int v2 = 39;
    int v3 = 64;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_574[i] = v1 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
