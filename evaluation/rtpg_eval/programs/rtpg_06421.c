int test_func(void) {
    int v0 = 54;
    int v1 = 5;
    int v2 = 81;
    int v3 = 42;
    int i;
    v2 = v2 + v3;
    v0 = 21;
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
