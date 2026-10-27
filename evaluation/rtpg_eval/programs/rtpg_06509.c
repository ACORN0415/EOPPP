int test_func(void) {
    int v0 = 12;
    int v1 = 48;
    int v2 = 6;
    int i;
    v0 = 36;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
