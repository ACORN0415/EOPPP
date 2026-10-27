int test_func(void) {
    int v0 = 89;
    int v1 = 48;
    int v2 = 31;
    int i;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
