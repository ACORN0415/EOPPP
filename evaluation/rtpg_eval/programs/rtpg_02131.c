int test_func(void) {
    int v0 = 82;
    int v1 = 60;
    int v2 = 70;
    int i;
    v0 = v0 * 10;
    v1 = v1 + v2;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
