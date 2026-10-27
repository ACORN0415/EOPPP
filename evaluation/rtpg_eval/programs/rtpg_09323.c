int test_func(void) {
    int v0 = 10;
    int v1 = 39;
    int v2 = 48;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    if (v2 > v0) { v2 = v0; }
    v0 = v0 + v0;
    int *__p = &v2;
    *__p = *__p + 1;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
