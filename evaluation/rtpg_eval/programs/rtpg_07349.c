int test_func(void) {
    int v0 = 42;
    int v1 = 89;
    int v2 = 70;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v0;
    }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
