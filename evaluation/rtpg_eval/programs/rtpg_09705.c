int test_func(void) {
    int v0 = 42;
    int v1 = 89;
    int v2 = 59;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
