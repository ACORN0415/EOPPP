int test_func(void) {
    int v0 = 42;
    int v1 = 86;
    int v2 = 78;
    int i;
    v1 = v1 - v2;
    v0 = 81;
    return v0;
}
int main(void) { return test_func(); }
