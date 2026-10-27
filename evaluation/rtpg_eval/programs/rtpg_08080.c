int test_func(void) {
    int v0 = 89;
    int v1 = 26;
    int v2 = 47;
    int v3 = 33;
    int i;
    v2 = 93;
    if (v0 > v3) { v0 = v3; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
